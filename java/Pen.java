public class Pen extends WritingUtencil {
    
    public Pen(int inkCapacity) {
        super(inkCapacity);
    }

    public Pen() {
        this(1024);
    }

    @Override
    public void write(Paper paper, String message)
        throws OutOfInkException, OutOfSpaceException, ClosedPenException {

        if ( this.inkAmount == 0 ) {
            throw new OutOfInkException();
        }
        if ( message.length() > this.inkAmount ) {
            paper.addContent(message.substring(0, this.inkAmount));
            this.inkAmount = 0;
            return;
        }
        paper.addContent(message);
        this.inkAmount -= message.length();
    }
}

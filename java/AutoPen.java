public class AutoPen extends Pen {
    protected boolean isOpen;

    public AutoPen(int inkCapacity) {
        super(inkCapacity);
        this.isOpen = false;
    }

    public AutoPen() {
        this(1024);
    }

    public boolean open() {
        return this.isOpen;
    }

    public void click() {
        this.isOpen = !this.isOpen;
    }

    @Override
    public void write(Paper paper, String message)
        throws OutOfInkException, OutOfSpaceException, ClosedPenException {

        if ( !this.open() ) {
            throw new ClosedPenException();
        }

        super.write(paper, message);
    }
}

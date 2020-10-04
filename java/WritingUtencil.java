public abstract class WritingUtencil {
    protected int inkAmount;
    protected int inkCapacity;

    public WritingUtencil(int inkCapacity) {
        this.inkAmount = inkCapacity;
        this.inkCapacity = inkCapacity;
    }

    public WritingUtencil() {
        this(1024);
    }

    public int getInkAmount() {
        return this.inkAmount;
    }

    public int getInkCapacity() {
        return this.inkCapacity;
    }

    public void refill() {
        inkAmount = inkCapacity;
    }

    public abstract void write(Paper paper, String message)
        throws OutOfInkException, OutOfSpaceException, ClosedPenException;
}

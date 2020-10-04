public interface WritingUtencil {
    public void write(Paper paper, String message)
        throws OutOfInkException, OutOfSpaceException, ClosedPenException;
}

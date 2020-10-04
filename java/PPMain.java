public class PPMain {
    public static void main(String[] args) throws
        OutOfInkException, OutOfSpaceException, ClosedPenException {
        
        Pen pen1 = new Pen();
        Paper paper = new Paper();
        AutoPen pen = new AutoPen();

        pen.click();
        pen.write(paper, "Hello, world!");
        paper.show();
    }
}

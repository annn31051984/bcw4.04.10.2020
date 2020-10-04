public class PPMain {
    public static void main(String[] args) throws Throwable {
        
        Paper paper = new Paper();
        AutoPen pen = new AutoPen();
        TestPen tp = new TestPen();

        pen.click();
        pen.write(paper, "Hello, world!");
        paper.show();
    }
}

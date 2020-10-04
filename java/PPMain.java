public class PPMain {
    public static void main(String[] args) throws Throwable {
        
        Paper paper = new Paper();
        AutoPen pen = new AutoPen();

        pen.click();
        pen.write(paper, "Hello, world!");
        paper.show();
    }
}

public class Paper {
    private StringBuffer content = new StringBuffer();
    private int maxSymbols;
    private int symbols;

    public Paper(int maxSymbols) {
        this.maxSymbols = maxSymbols;
        this.symbols = 0;
    }

    public Paper() {
        this(4096);
    }

    public int getMaxSymbols() {
        return this.maxSymbols;
    }

    public int getSymbols() {
        return this.symbols;
    }

    public void addContent(String message) throws WritingUtencilBaseException {
        int total = this.content.length() + message.length();

        if ( this.content.length() == this.maxSymbols ) {
            throw new OutOfSpaceException();
        }
        if ( total > this.maxSymbols ) {
            this.content.append(message.substring(0, this.maxSymbols-this.content.length()));
            return;
        }
        this.content.append(message);
    }

    public void show() {
        System.out.println(content);
    }
}

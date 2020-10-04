public class CatDog implements Cat, Dog {
    public String name;

    public CatDog(String name) {
        this.name = name;
    }

    public CatDog() {
        this("CatDog");
    }

    public void meow() {
        System.out.println("meow...");
    }

    public void bark() {
        System.out.println("grrrrr...");
    }

    public void makeNoise() {
        System.out.println("ololo...");
    }

    public void speak() {
        System.out.println("Hello...");
    }
}

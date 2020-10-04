public class Main {
    public static void handle(Cat obj) {
        obj.meow();
    }

    public static void handle(Dog obj) {
        obj.bark();
    }

    public static void handle(Animal obj) {
        obj.makeNoise();
    }

    public static void handle(CatDog obj) {
        obj.speak();
    }

    public static void main(String args[]) {
        CatDog cd = new CatDog();

        handle(cd);
        handle((Cat)cd);
        handle((Dog)cd);
        handle((CatDog)cd);
    }
}
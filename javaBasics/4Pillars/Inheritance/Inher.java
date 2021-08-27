
class Animal {
    void eat() {
        System.out.println("eating...");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("barking...");
    }
}

 class BabyDog extends Dog {
    static void weep() {
        System.out.println("weeping...");
    }
}

public class Inher {
    public static void main(String args[]) {
        BabyDog d = new BabyDog();
        BabyDog.weep();
        d.bark();
        d.eat();
    }
}

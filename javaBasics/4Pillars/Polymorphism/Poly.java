// Java program for Method overloading

class MultiplyFun {
    // Compile time polymorphism or static polymorphism
    // Method with 2 parameter
    static int Multiply(int a, int b) {
        return a * b;
    }

    // Method with the same name but 2 double parameter
    static double Multiply(double a, double b) {
        return a * b;
    }
}

// Runtime Poly or Dynamic Method Dispatch
// Java program for Method overriding

class Parent {

    void Print() {
        System.out.println("parent class");
    }
}

class subclass1 extends Parent {

    void Print() {
        System.out.println("subclass1");
    }
}

class subclass2 extends Parent {
    void Print() {
        System.out.println("subclass2");
    }
}

class Poly {
    public static void main(String[] args) {

        System.out.println(MultiplyFun.Multiply(2, 4));
        System.out.println(MultiplyFun.Multiply(5.5, 6.3));

        Parent a;
        a = new subclass1();
        a.Print();
        a = new subclass2();
        a.Print();
    }
}
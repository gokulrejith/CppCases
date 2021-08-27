abstract class Bike{
    abstract void run();
}
class Honda4 extends Bike{
    void run(){
        System.out.println("Running");
    }
}



public class Abstract {
    // Abstraction is a process of hiding the
    // implementation details and showing only
    // functionality to the user.

    public static void main(String args[]){
        Bike obj = new Honda4();
    }
}

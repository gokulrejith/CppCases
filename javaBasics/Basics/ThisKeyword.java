//In object-oriented programming with classes,
// an instance variable is a variable defined 
//in a class, for which each instantiated object
// of the class has a separate copy, or instance.
class Tester{

    private int check = 89;
    void Meth(){
        int check = 900;
        System.out.println("local: " + check);
        System.out.println("Instance: " + this.check);
    }

}

public class ThisKeyword {
    public static void main(String args[]){
        Tester test = new Tester();
        test.Meth();
    }
}

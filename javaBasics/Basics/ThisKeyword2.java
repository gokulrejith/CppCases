class Student {
    int roll;
    String name;
    float fee;
//local variable hides the instance variable
    Student(int roll, String name, float fee) {
        this.roll = roll;
        this.name = name;
        this.fee = fee;
    }

    void Method() {
        System.out.println("Roll: " + roll + "Name: " + name + "Fee: " + fee);
    }
}

public class ThisKeyword2 {
    public static void main(String args[]) {
        Student s1 = new Student(111, "ankit", 5000f);//Instance variables
        Student s2 = new Student(112, "sumit", 6000f);
        s1.Method();
        s2.Method();
    }
}

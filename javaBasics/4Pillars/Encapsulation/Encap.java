//Binding data with methods

class Student {
    private int rollno;
    private String name;

    // Getters and Setters
    public void setRollno(int rollno) {
        this.rollno = rollno;
    }

    public int getRollno() {
        return rollno;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

}

public class Encap {
    public static void main(String args[]){
        Student s1 = new Student();
        s1.setRollno(9);
        s1.setName("Goku");
        System.out.println(s1.getRollno());
        System.out.println(s1.getName());
    }

}
//Data needs to be safe.
//We can assign the values using methods only.
//Variable can be kept private.
//Log files can be maintained.

class Emp{
    int eid;
    int salary;
    static String ceo; //Will be same for all objects
    public void show(){
        System.out.println(eid + " : " + salary + " : " + ceo);
    }
}

public class Static {
    public static void main(String args[]){
        Emp navin = new Emp();
        Emp rahul = new Emp();

        navin.eid = 8;
        navin.salary = 4000;
        navin.ceo = "Goku";

        rahul.eid = 9;
        rahul.salary = 5000;
        rahul.ceo = "Goku";
        rahul.ceo = "Rejith";

        navin.show();
        rahul.show();

    }
}

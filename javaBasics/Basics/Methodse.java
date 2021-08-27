class Boxes{
    double l,w,d;
    Boxes(){//Constructor
        System.out.println("Constructing Box");
        l = 10;
        w = 10;
        d = 10;
    }

    double Volume(){
        return l*w*d;
    }
    double Volume(double l, double w, double d){
        return l*w*d;
    }
}


public class Methodse {
    public static void main(String args[]){
        Boxes Box1 = new Boxes();
        // Parantheses are required after class name because 
        // the constructor is being called. For ex here Box1 is calling
        // Boxes() constructor. Default constructor automatically initializes
        // all values to zero.
        System.out.println("Volume (Default): " + Box1.Volume());
        System.out.println("Volume (Custom): " + Box1.Volume(12,45,93));
    }
}

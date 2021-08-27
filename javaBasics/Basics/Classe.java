 class Box{
    double width;
    double height;
    double depth;

}

public class Classe{
    public static void main(String args[]){
Box myBox = new Box();
myBox.width = 10;
myBox.height = 20;
myBox.depth = 44;
double vol = myBox.width*myBox.height*myBox.depth;
System.out.println("Volume is: " + vol);

//Assigning object reference variables
Box b2 = myBox;
System.out.println("Width of: " + b2.width);
//myBox and b2 refers to the same object.
//if myBox = null; b2 still refers to the object.
myBox = null;
System.out.println("Width of: " + b2.width);
System.out.println("Volume is: " + myBox);
System.out.println("Volume is: " + vol);
    }
}
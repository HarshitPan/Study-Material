import java.util.Scanner;
class Calculator
{
    int n1,n2;
    Scanner sc=new Scanner(System.in);
    Calculator()
    {
        n1=0;
        n2=0;
    }
    void init()
    {
        //Scanner sc=new Scanner(System.in);
        System.out.print("Enter first value ->");
        n1=sc.nextInt();
        System.out.print("\nEnter Second value ->");
        n2=sc.nextInt();
    }
    int add() {return n1+n2;}
    int sub() {return n1-n2;}
    int multiply() {return n1*n2;}
    int division() {return n1/n2;}
    int modulus() {return n1%n2;}
    public static void main(String args[])
    {

        int choice;
        //Scanner sc1=new Scanner(System.in);
        Calculator obj1=new Calculator();
        obj1.init();
        System.out.println("****Main Menu.****\n1,Add\n2.Sub\n3,Multiply\n4.Division.\n5.Modulus");
        
        System.out.print("Enter Your Choice ->");
        
        choice = obj1.sc.nextInt();
        int result=0;
        if(choice==1) result=obj1.add(); 
        else if(choice==2) result=obj1.sub();
        else if(choice==3)result=obj1.multiply();
        else if(choice==4)result=obj1.division();
        else if(choice==5)result=obj1.modulus();
        else System.out.println("Command mot found.");
        System.out.println("Result -> "+result);
    }
}

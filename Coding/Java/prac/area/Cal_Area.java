import java.util.Scanner;

class Cal_Area
{
    Scanner sc=new Scanner(System.in);
    Cal_Area()
    {
        int choice = check();
        entry(choice);
    }
    int check()
    {
        System.out.println("*********Main Menu*******");
        System.out.println("1.Rectangle.");
        System.out.println("2.Square");
        System.out.println("3.Circle");
        System.out.println("4.Triangle.");
        System.out.println("5.Exit.");
        int ch=sc.nextInt();
        return ch;
    }
    void entry(int choice)
    {
        switch(choice)
        {
            case 1:
                System.out.println("Enter length and bredth -: ");
                rect(sc.nextInt(),sc.nextInt());
                break;
            case 2:
                System.out.println("Enter length -:");
                square(sc.nextInt());
                break;
            case 3:
                System.out.println("Enter Radius -:");
                circle(sc.nextInt());
                break;
            case 4:
                System.out.println("Enter height and breadth -:");
                triangle(sc.nextInt(),sc.nextInt());
                break;
            case 5:
                System.out.println("Thanks for Using Our Application.");
                break;
            default:
                System.out.println("Invalid Input.");
        }
    }
    void rect(int a,int b)
    {
        System.out.println("Area -> " + a*b);
    }
    void square(int a)
    {
        System.out.println("Area -> "+a*a);
    }
    void circle(float r)
    {
        System.out.println("Area -> " + 3.14*r*r);
    }
    void triangle(int a,int b)
    {
        System.out.println("Area -> "+ (a*b)/2);
    }
    public static void main(String args[])
    {
        Cal_Area obj=new Cal_Area();
    }
}
import java.util.Scanner;

class Largest
{
    static void largest(int a,int b, int c)
    {
        if(a>=b && a>=c)
            System.out.println("Largest ->"+a);
        else if(b>a && b>=c)
            System.out.println("Largest ->"+b);
        else
            System.out.println("Largest ->"+c);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter any three integers -:");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        Largest.largest(a,b,c);
    } 
}
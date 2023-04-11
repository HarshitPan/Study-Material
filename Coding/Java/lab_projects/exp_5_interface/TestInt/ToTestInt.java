import java.util.Scanner;

interface Test
{
    final int x=19;
    void square(int a);
}
class Arithematic implements Test
{
    int a;
    Arithematic(int a)
    {
        this.a=a;
    }
    public void square(int a)
    {
        System.out.println("Square of "+a+" is -: "+a*a);
    }
}
class ToTestInt
{
    static Scanner sc=new Scanner(System.in);
    public static void main(String args[])
    {
        System.out.println("Enter a number -> ");
        int a=sc.nextInt();
        Arithematic obj=new Arithematic(a);
        obj.square(obj.a);
    }
}
import java.util.Scanner;
interface Shape
{
    static float pi=3.14f;
    float area(int a); 
}
interface Shape2 extends Shape// implements Shape
{
    //private
    int a2=10;
}
class Circle implements Shape
{
    public float area(int a)
    {
        return pi*a*a;
    }
    static void disp()
    {
        System.out.println(area(2));
       // System.out.println(a2);
    }
}
class A extends Circle implements Shape2
{
    public static void main(String args[])
    {
        Circle c1=new Circle();
        c1.disp();
        System.out.println(a2);   

    }
    //void disp();p 
}
class Hello extends A
{
    int a,b;
    Hello(int c,int d)
    {
        a=c;
        b=d;
    }
    void disp2()
    {
        int x=0; // local variables must be assigned with a value.
        System.out.println(a+" and "+x+" "+b);
    }
    public static void main(String args[])
    {
        System.out.println(A.pi);
        Scanner sc=new Scanner(System.in);
        int abc=123;
        String obj=new String();
        obj="new";
        System.out.println(obj);
        System.out.println("Hello World -> " + abc);
        Hello obj1=new Hello(10,20);
        Hello obj2=new Hello(30,40);
        obj1.disp2();
        obj2.disp2();
        System.out.println(obj1.a+" "+obj1.b);
        System.out.println(obj2.a+" "+obj2.b);
        boolean abcde=true;
        abcde=sc.nextBoolean();
        System.out.println(abcde);
        sc.close();
    }
}

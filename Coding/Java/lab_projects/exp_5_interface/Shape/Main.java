import java.util.Scanner;

interface Shape
{
    float pi=3.14f;
    void area(int r,int h);
    void vol(int r,int h);
}
class Cylinder implements Shape
{
    int r,h;
    Scanner sc=new Scanner(System.in);
    Cylinder()
    {
        System.out.println("For Cylinder...");
        System.out.println("Enter height -> ");
        h=sc.nextInt();
        System.out.println("Enter Radius -> ");
        r=sc.nextInt();
    }
    public void area(int r,int h)
    {
        System.out.println("C.S.Area of cylinder is -> "+2*pi*r*h);
    }
    public void vol(int r,int h)
    {
        System.out.println("Volume of Cylinder is -> "+pi*r*r*h);
    }

}
class Cone implements Shape
{
    int r,l,h;
    Scanner sc=new Scanner(System.in);
    Cone()
    {
        System.out.println("For Cone...");
        System.out.println("Enter latent height -> ");
        l=sc.nextInt();
        System.out.println("Enter Radius -> ");
        r=sc.nextInt();
        findh();
    }
    void findh()
    {
        h=l*l-r*r;
        int temp=1;
        for(;temp*temp<h;temp++);
        if(temp*temp==h)h=temp;
        else h=temp-1;
    }
    public void area(int r,int h)
    {
        
        System.out.println("C.S.Area of cone is -> "+pi*r*l);
    }
    public void vol(int r,int h)
    {
        System.out.println(h);
        System.out.println("Volume of Cylinder is -> "+(pi*r*r*h)/3);
    }
}
class Main{
    public static void main(String args[])
    {
        Cylinder cyl=new Cylinder();
        cyl.area(cyl.r,cyl.h);
        cyl.vol(cyl.r,cyl.h);
        System.out.println();
        Cone cone1=new Cone();
        cone1.area(cone1.r,cone1.l);
        cone1.vol(cone1.r,cone1.h);
    }
}
import java.util.Scanner;

class Square
{
    int a[],size=10;
    Scanner sc=new Scanner(System.in);
    Square()
    {
        a=new int [size];
        System.out.println("Enter any 10 integers ->");
        for(int i=0;i<size;i++) a[i]=sc.nextInt();
        sqr(size);
        sum(size);
    }
    void sqr(int n)
    {
        System.out.println("Square of values in array -:");
        for(int i=0;i<n;i++)
            System.out.println(a[i]+" -> "+a[i]*a[i]);
    }
    void sum(int n)
    {
        int cal=0;
        for(int i=0;i<n;i++) cal+=a[i];
        System.out.println("Sum of all Values -> "+cal);
    }
    public static void main(String args[])
    {
        Square obj=new Square();
        Square obj2=new Square();
        obj.sqr(obj.size);
    }
}
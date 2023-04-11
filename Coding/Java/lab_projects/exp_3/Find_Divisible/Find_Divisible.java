import java.util.Scanner;

class Find_Divisible
{
    int n=5;
    int x=40,y=250;
    boolean pass=false;
    void entry()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the divisible number->");
        n=sc.nextInt();
        System.out.println("Enter range(lower and upper respectively) -> ");
        x=sc.nextInt();
        y=sc.nextInt();
    }
    void find()
    {
        System.out.println("Number between "+x+" and "+y+" which are divisible by "+n+" are -:");
        int i;
        for(i=x+1;i<x+1+n;i++) if(i%n==0) break;
        for(;i<y;i+=n)
        {
            System.out.print(i+" , ");
        }
    }
    public static void main(String args[])
    {
        Find_Divisible obj=new Find_Divisible();
        obj.find();
        System.out.println();
    }
}
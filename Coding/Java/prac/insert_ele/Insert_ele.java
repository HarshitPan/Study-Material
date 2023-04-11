import java.util.Scanner;
class Insert_ele
{
    int n=5;
    Scanner sc=new Scanner(System.in);
    int arr[];
    Insert_ele()
    {
        entry();
        System.out.print("Enter the value to insert ->");
        int val=sc.nextInt();
        System.out.print("Enter the position where value is to be insert->");
        int pos=sc.nextInt();
        shift(pos,val);
    }
    void entry()
    {
        System.out.print("Enter no of values -> ");
        n=sc.nextInt();
        arr=new int[n+1];
        System.out.print("Enter the values ->");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        disp();
    }
    void shift(int pos,int value)
    {
        for(int i=0;i<=n;i++)
        {
            if(i==pos)
            {
                for(int j=n;j>i;j--)
                {
                    arr[j]=arr[j-1];
                }
                arr[i]=value;
            }
        }
    }
    void disp()
    {
        System.out.print("Array is ->");
        for(int i=0;i<=n;i++)
        {
            System.out.println(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String args[])
    {
        Insert_ele obj1=new Insert_ele();
        obj1.disp();
    }
}
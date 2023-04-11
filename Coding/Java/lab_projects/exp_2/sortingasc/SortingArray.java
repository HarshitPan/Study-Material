import java.util.Scanner;
class SortingArray
{
    void disp(int a[],int size)
    {
        System.out.print("Sorted array -> ");
        int i;
        for(i=0;i<size-1;i++)
        {
            System.out.print(a[i]+" ");
            if(a[i]>40 && a[i]<50) System.out.println("PASS");
            else if (a[i]>50 && a[i]<75) System.out.println("MERIT");
            else if(a[i]>75) System.out.println("DISTINCTION");
        }
        System.out.print(a[i]+" ");
        if(a[i]>40 && a[i]<50) System.out.println("PASS");
            else if (a[i]>50 && a[i]<75) System.out.println("MERIT");
            else if(a[i]>75) System.out.println("DISTINCTION");
        System.out.println();
    }
    void sort(int a[],int size)
    {
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(a[j]<a[i])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        disp(a,size);
    }
    SortingArray()
    {
        int size=10;
        Scanner sc=new Scanner(System.in);
        int arr[]=new int[size];
        System.out.println("Enter marks -:");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
        sort(arr,size);

    }
    public static void main(String args[])
    {
        SortingArray obj=new SortingArray();
    }
}
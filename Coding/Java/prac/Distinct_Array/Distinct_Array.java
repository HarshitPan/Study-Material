import java.util.Scanner;

class Distinct_Array
{
    int size=25;
    int arr[];
    int saved[][];
    int pos=0;
    Scanner sc=new Scanner(System.in);
    Distinct_Array()
    {
        //entry();
        //find_dist();
        arr=new int[10];
        arr[0]=10;
        saved=new int[size][2];
        saved[0][0]=10;
        System.out.println(arr+" arr");
        System.out.println(saved+" saved");
    }
    void entry()
    {//int a[];
        System.out.print("Enter size of array -> ");
        size=sc.nextInt();
        arr=new int[size]; // int a[10]; -> new int[10]
        saved=new int[size][2];
        System.out.print("Enter the values -> ");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
    }
    void find_dist()
    {
        for(int i=0;i<size;i++)
        {
            boolean check=false;
            for(int j=0;j<pos;j++)
            {
                if(arr[i]==saved[j][0])
                {
                    check=true;
                    saved[j][1]++;
                    break;
                }
            }
            if(check==false)
            {
                saved[pos][0]=arr[i];
                saved[pos][1]=1;
                pos++;
            }
        }
    }
    void disp()
    {
        System.out.println("Distinct Values and there re-occurance in Array are -:");
        for(int i=0;i<pos;i++)
        {
            System.out.println(saved[i][0]+" -> "+saved[i][1]);
        }
    }
    public static void main(String args[])
    {
        Distinct_Array obj= new Distinct_Array();
        obj.disp();
    }
}
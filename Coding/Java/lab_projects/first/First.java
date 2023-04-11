import java.util.Scanner;
class Second
{
    int a=0;
    static int b=0;
    Second()
    {
        a++;
        b++;
        System.out.println(a + "," + b);
    }
    public static void main()
    {
        System.out.println("Main in second.");
    }
} 
class First extends Second
{
    public static void main(String[] args)
    {
        int count=0;
        boolean flag=true;
        System.out.println("First");
        for (int i=0;flag;i++)
        {
            try
            {
                if(args[i]=="\0");
                count++;
            }
            catch(ArrayIndexOutOfBoundsException x)
            {
                flag=false;
            }
            //else count++;
        }
        System.out.println("Length - "+count);
        int countly=args.length;
        System.out.println("Countly - "+countly);
        for (int i=0;i<count;i++)
        {
            System.out.println(args[i]);
        }
        int val=10;
        System.out.println(++val+" "+ ++val+" "+ val++ +" "+ ++val +" "+ ++val+" "+ val++ +" "+ ++val +" "+ ++val+" ");
        System.out.println("Enter any value -:");
        Scanner sc = new Scanner (System.in);
        int temp=sc.nextInt();
        System.out.println(temp);
        sc.close();
        Second.main();
    }
    
}

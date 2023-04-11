import java.util.Scanner;

abstract class Trunk_Call
{
    int duration;
    abstract void bill();
    
}
class Ordinary extends Trunk_Call
{
    Ordinary(int duration)
    {
        this.duration=duration;
    }
    void bill()
    {
        System.out.println("Amount -> "+(10*duration));
    }
}
class Urgent extends Trunk_Call
{
    Urgent(int duration)
    {
        this.duration=duration;
    }
    void bill()
    {
        System.out.println("Amount -> "+(50*duration));
    }
}
class Lightning extends Trunk_Call
{
    Lightning(int duration)
    {
        this.duration=duration;
    }
    void bill()
    {
        System.out.println("Amount -> "+(100*duration));
    }
}
class Main
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Call Duration ->");
        int duration=sc.nextInt();
        System.out.println("1. Ordinary");
        System.out.println("2. Urgent");
        System.out.println("3. Lightning");
        System.out.print("Enter your choice ->");
        int choice=sc.nextInt();
        switch(choice)
        {
            case 1:
                Ordinary obj=new Ordinary(duration);
                obj.bill();
                break;
            case 2:
                Urgent obj2=new Urgent(duration);
                obj2.bill();
                break;
            case 3:
                Lightning obj3=new Lightning(duration);
                obj3.bill();
                break;
            default:
                System.out.println("Invalid Choice...");
        }
    }
}
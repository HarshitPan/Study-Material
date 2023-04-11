import java.util.Scanner;

class Laptop
{
    Scanner sc=new Scanner(System.in);
    String brand,model,processor;
    int ram,disk,price;
    Laptop()
    {
        System.out.println("Object for Laptop is created...");
        System.out.println("Enter Default Value...");
        input();
        System.out.println();
        System.out.println("Default Laptop Added...\n");
        System.out.print("Press Enter to continue...");
        sc.nextLine();
        sc.nextLine();
    }
    void input()
    {
        System.out.print("Enter Brand Name -:");
        brand=sc.nextLine();
        System.out.print("Enter Model No. -:");
        model=sc.nextLine();
        System.out.print("Enter Processor -:");
        processor=sc.nextLine();
        System.out.print("Enter RAM Size -:");
        ram=sc.nextInt();
        System.out.print("Enter Hard Disk Size -:");
        disk=sc.nextInt();
        System.out.print("Enter Price -:");
        price=sc.nextInt();
        System.out.println("New Laptop Updated...");
    }
    static void mainmenu()
    {
        System.out.println("************** Main-Menu ***************");
        System.out.println("1.Enter New Laptop.");
        System.out.println("2.Change RAM.");
        System.out.println("3.Change Price.");
        System.out.println("4.Display Details.");
        System.out.println("5.Exit");
    }
    void change_ram(int ram)
    {
        this.ram=ram;
        System.out.println("RAM Updated Successfully...");
    }
    void change_price(int price)
    {
        this.price=price;
        System.out.println("Price Updated Successfully...");
    }
    void display()
    {
        System.out.println("Brand -: "+ brand);
        System.out.println("Model No. -:" + model);
        System.out.println("Processor -: "+ processor);
        System.out.println("RAM -: "+ram+" GB");
        System.out.println("Disk -:"+disk+" GB");
        System.out.println("Price -:"+price);
    }
}
class Main
{
    public static void main(String[] args) {
        Laptop obj=new Laptop();
        while(true)
        {
            System.out.println();
            Laptop.mainmenu();
            System.out.print("Enter your choice -: ");
            int choice = obj.sc.nextInt();
            System.out.println();
            switch(choice)
            {
                case 1:
                    obj.sc.nextLine();
                    obj.input();
                    break;
                case 2:
                    System.out.print("Enter new RAM -: ");    
                    int ram=obj.sc.nextInt();
                    obj.change_ram(ram);
                    break;
                case 3:
                    System.out.print("Enter new Price -: ");    
                    int price=obj.sc.nextInt();
                    obj.change_price(price);
                    break;
                case 4:
                    obj.display();
                    break;
                case 5:
                    System.out.println("Thanks for using the program...");
                    return;
                default:
                    System.out.println("Invalid Value... Try Again...");
            }
            System.out.println();
            System.out.print("Press Enter to continue...");
            obj.sc.nextLine();
            obj.sc.nextLine();
            System.out.println();
        }
    }
}
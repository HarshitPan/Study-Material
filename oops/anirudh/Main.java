import java.util.Scanner;

import javax.swing.SortOrder;

class Laptop
{
    Scanner sc=new Scanner(System.in);
    String laptop_name[];
    private int base_price[],ram[],disk_space[];
    int size=0;
    final int price_per_GB_ram=500,price_per_GB_disk=10;
    Laptop()
    {
        System.out.print("Enter no of Laptops ->");
        size=sc.nextInt();
        sc.nextLine();
        laptop_name=new String[size];
        ram=new int[size];
        disk_space=new int[size];
        base_price=new int[size];
        input(size);
    }
    void input(int size)
    {
        int pos=0;
        while(pos<size)
        {
            System.out.print("Enter Laptop name -:");
            laptop_name[pos]=sc.nextLine();
            while(true)
            {
                System.out.print("Enter RAM (Multiple of 2)-:");
                ram[pos]=sc.nextInt();
                if(ram[pos]%2==0) break;
                else{
                    System.out.print("Not a multiple of 2...Try Again...Press Enter to continue...");
                    sc.nextLine();
                    sc.nextLine();
                }
            }
            while(true)
            {
                System.out.print("Enter disk size (Multiple of 32)-:");
                disk_space[pos]=sc.nextInt();
                if(disk_space[pos]%32==0) break;
                else{
                    System.out.print("Not a multiple of 32...Try Again ...Press Enter to continue...");
                    sc.nextLine();
                    sc.nextLine();
                }
            }
            System.out.print("Enter base price -:");
            base_price[pos]=sc.nextInt();
            pos++;
            sc.nextLine();
            System.out.println();
            System.out.println("******************************");
            System.out.println();
        }
        System.out.println("Values has been inputted...Press Enter to continue...");
        sc.nextLine();
    }
    void change_ram(String s,int value)
    {
        for(int i=0;i<size;i++)
        {
            if(s.equalsIgnoreCase(laptop_name[i]))
            {
                ram[i]=value;
                System.out.println("RAM updated successfully...");
                return;
            }
        }
        System.out.println("No Laptop with Name "+s+" found.");
    }
    void change_base(String s,int value)
    {
        for(int i=0;i<size;i++)
        {
            if(s.equalsIgnoreCase(laptop_name[i]))
            {
                base_price[i]=value;
                System.out.println("Base Pice updated successfully...");
                return;
            }
        }
        System.out.println("No Laptop with Name "+s+" found.");
    }
    int cal_total_price(int i)
    {
        return base_price[i]+(price_per_GB_ram*ram[i])+(disk_space[i]*price_per_GB_disk);
    }
    void disp()
    {
        print_gap("Laptop");
        System.out.println(" Laptop             RAM            Disk ");
        System.out.println();
        for(int i=0;i<size;i++)
        {
            print_gap(laptop_name[i]);
            System.out.print(laptop_name[i]+"  ");
            print_gap(ram[i]);
            System.out.print(ram[i]+"  ");
            print_gap(disk_space[i]);
            System.out.print(disk_space[i]+"  ");
            System.out.println();
        }
    }
    static void mainmenu()
    {
        System.out.println("*****************Main-Menu******************");
        System.out.println("1.Laptop with Largest RAM.");
        System.out.println("2.Laptop with Lowest RAM.");
        System.out.println("3.Laptop with Highest Base Price.");
        System.out.println("4.Laptop with Lowest Base Price.");
        System.out.println("5.Change RAM for a Laptop.");
        System.out.println("6.Change Base Price of a Laptop.");
        System.out.println("7.Specification of all laptops.");
        System.out.println("8.Average base price.");
        System.out.println("9.Total Cost.");
        System.out.println("10.Exit.");
    }
    void max_ram()
    {
        int i=0;
        for(int j=1;j<size;j++) if(ram[j]>ram[i]) i=j;
        System.out.println("Laptop - "+laptop_name[i]);
        System.out.println("RAM - "+ram[i]);
        System.out.println("Disk - "+disk_space[i]);
    }
    void max_base()
    {
        int i=0;
        for(int j=1;j<size;j++) if(base_price[j]>base_price[i]) i=j;
        System.out.println("Laptop - "+laptop_name[i]);
        System.out.println("RAM - "+ram[i]);
        System.out.println("Disk - "+disk_space[i]);
        System.out.println("Base Price - "+base_price[i]);
    }
    void min_ram()
    {
        int i=0;
        for(int j=1;j<size;j++) if(ram[j]<ram[i]) i=j;
        System.out.println("Laptop - "+laptop_name[i]);
        System.out.println("RAM - "+ram[i]);
        System.out.println("Disk - "+disk_space[i]);
    }
    void min_base()
    {
        int i=0;
        for(int j=1;j<size;j++) if(base_price[j]<base_price[i]) i=j;
        System.out.println("Laptop - "+laptop_name[i]);
        System.out.println("RAM - "+ram[i]);
        System.out.println("Disk - "+disk_space[i]);
        System.out.println("Base Price - "+base_price[i]);
    }
    int avg_base()
    {
        int total=0;
        for(int i=0;i<size;i++) total+=base_price[i];
        return total/size;

    }
    void total_cost()
    {
        print_gap("Laptop");
        System.out.println("Laptop              RAM             Disk       Base Price    Finished Price  ");
        System.out.println();
        for(int i=0;i<size;i++)
        {
            print_gap(laptop_name[i]);
            System.out.print(laptop_name[i]+"  ");
            print_gap(ram[i]);
            System.out.print(ram[i]+"  ");
            print_gap(disk_space[i]);
            System.out.print(disk_space[i]+"  ");
            print_gap(base_price[i]);
            System.out.print(base_price[i]+"  ");
            int temp=cal_total_price(i);
            print_gap(temp);
            System.out.print(temp);   
            System.out.println();
        }
    }
    void print_gap(int a)
    {
        int max=15;
        float count=0;
        if(a<=0)
            count++;
        while(a!=0)
        {
            count++;
            a/=10;
        }
        for(int i=0;i<max-count;i++)
        {
            System.out.print(" ");
        }
    }
    void print_gap(String s)
    {
        int max=15,count=s.length();
        for(int i=0;i<max-count;i++) System.out.print(" ");
    }
}
class Main
{
    public static void main(String args[])
    {
        Laptop obj=new Laptop();
        System.out.println("\n");
        while(true)
        {
            Laptop.mainmenu();
            System.out.print("Enter your choice ->");
            int choice=obj.sc.nextInt();
            System.out.println("\n");
            switch(choice)
            {
                case 1:
                    obj.max_ram();
                    break;
                case 2:
                    obj.min_ram();
                    break;
                case 3:
                    obj.max_base();
                    break;
                case 4:
                    obj.min_base();
                    break;
                case 5:
                    System.out.print("Enter Name of Laptop in operation -:");
                    obj.sc.nextLine();
                    String name=obj.sc.nextLine();
                    int new_ram=0;
                    while(true)
                    {
                        System.out.print("Enter New RAM (multiple of 2) -:");
                        new_ram=obj.sc.nextInt();
                        if(new_ram%2==0)break;
                        else{
                            System.out.print("Not a multiple of 2...Try Again...Press Enter to continue...");
                            obj.sc.nextLine();
                            obj.sc.nextLine();
                        }
                    }
                    System.out.println();
                    obj.change_ram(name,new_ram);
                    break;
                case 6:
                    System.out.print("Enter Name of Laptop in operation -:");
                    obj.sc.nextLine();
                    name=obj.sc.nextLine();
                    System.out.print("Enter New Base Price -:");
                    new_ram=obj.sc.nextInt();
                    System.out.println();
                    obj.change_base(name,new_ram);
                    break;
                case 7:
                    obj.disp();
                    break;
                case 8:
                    System.out.println("Average Base Price -> "+obj.avg_base());
                    break;
                case 9:
                    obj.total_cost();
                    break;
                case 10:
                    return;
                default:
                    System.out.println("Invalid Value Found...Try Again...");
            }
            System.out.println();
            System.out.print("Press Enter to continue...");
            obj.sc.nextLine();
            obj.sc.nextLine();
            System.out.println("\n");
        }
    }
}
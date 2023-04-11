import java.util.Scanner;

class EcomSites
{
    Scanner sc=new Scanner(System.in);
    String site_name[],product[];
    int total,budget[],quantity[];
    int pos=0; 
    EcomSites()
    {
        System.out.println("Hello...Please enter the details...");
        System.out.print("Enter no of products ->");
        total=sc.nextInt();
        sc.nextLine();
        product=new String[total];
        site_name=new String[total];
        budget=new int[total];
        quantity=new int[total];
        input(total);
    }
    void input(int size)
    {
        while(pos<size)
        {
            System.out.print("Enter website name -:");
            site_name[pos]=sc.nextLine();
            System.out.print("Enter product Name -:");
            product[pos]=sc.nextLine();
            System.out.print("Enter price of product -:");
            budget[pos]=sc.nextInt();
            System.out.print("Enter the quantity -:");
            quantity[pos]=sc.nextInt();
            pos++;
            sc.nextLine();
            System.out.println();
            System.out.println("******************************");
            System.out.println();
        }
        System.out.println("Values has been inputted...Press Enter to continue...");
        sc.nextLine();
    }
    void bill()
    {
        int total_price=0;
        System.out.println(" Website        Prod_Name       Budget        Quantity        Amount");
        System.out.println();
        for(int i=0;i<pos;i++)
        {
            print_gap(site_name[i]);
            System.out.print(site_name[i]+"  ");
            print_gap(product[i]);
            System.out.print(product[i]+"  ");
            print_gap(budget[i]);
            System.out.print(budget[i]+"  ");
            print_gap(quantity[i]);
            System.out.print(quantity[i]+"  ");
            total_price+=budget[i]*quantity[i];
            print_gap(total_price);
            System.out.print(budget[i]*quantity[i]);   
            System.out.println();
        }
        System.out.println("Total Amount - "+total_price);
    } 
    void display()
    {
        System.out.println(" Website       Prod_Name      Budget     Quantity");
        System.out.println();
        for(int i=0;i<pos;i++)
        {
            print_gap(site_name[i]);
            System.out.print(site_name[i]+"");
            print_gap(product[i]);
            System.out.print(product[i]+"");
            print_gap(budget[i]);
            System.out.print(budget[i]+"  ");
            print_gap(quantity[i]);
            System.out.print(quantity[i]+"  ");
            System.out.println();
        }
       
    }
    void change_quantity(String s,int value)
    {
        for(int i=0;i<pos;i++)
        {
            if(s.equalsIgnoreCase(product[i]))
            {
                quantity[i]=value;
                System.out.println("Quantity updated successfully...");
                return;
            }
        }
        System.out.println("No Product Name "+s+" found.");
    }
    void change_budget(String s,int value)
    {
        for(int i=0;i<pos;i++)
        {
            if(s.equalsIgnoreCase(product[i]))
            {
                budget[i]=value;
                System.out.println("Price updated successfully...");
                return;
            }
        }
        System.out.println("No Product Name "+s+" found.");
    }
    void min_budget()
    {
        int i=0;
        for(int j=1;j<pos;j++) if(budget[j]<budget[i]) i=j;
        System.out.println("Website - "+site_name[i]);
        System.out.println("Product Name - "+product[i]);
        System.out.println("Budget - "+budget[i]);
        System.out.println("Quantity - "+quantity[i]);
    }
    void min_quantity()
    {
        int i=0;
        for(int j=1;j<pos;j++) if(quantity[j]<quantity[i]) i=j;
        System.out.println("Website - "+site_name[i]);
        System.out.println("Product Name - "+product[i]);
        System.out.println("Budget - "+budget[i]);
        System.out.println("Quantity - "+quantity[i]);
    }
    void max_quantity()
    {
        int i=0;
        for(int j=1;j<pos;j++) if(quantity[j]>quantity[i]) i=j;
        System.out.println("Website - "+site_name[i]);
        System.out.println("Product Name - "+product[i]);
        System.out.println("Budget - "+budget[i]);
        System.out.println("Quantity - "+quantity[i]);
    }
    void max_budget()
    {
        int i=0;
        for(int j=1;j<pos;j++) if(budget[j]>budget[i]) i=j;
        System.out.println("Website - "+site_name[i]);
        System.out.println("Product Name - "+product[i]);
        System.out.println("Budget - "+budget[i]);
        System.out.println("Quantity - "+quantity[i]);
    }
    static void mainmenu()
    {
        System.out.println("*********Main-Menu*********");
        System.out.println("1.Product with highest budget.");
        System.out.println("2.Product with lowest Budget.");
        System.out.println("3.Product with lowest quantity.");
        System.out.println("4.Product with highest quantity.");
        System.out.println("5.Change Budget.");
        System.out.println("6.Change Quantity.");
        System.out.println("7.Cart List.");
        System.out.println("8.Bill.");
        System.out.println("9.Exit.");
    } 
    void print_gap(int a) 
    {
        int max=12;
        float count=0;
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
        int max=12,count=s.length();
        for(int i=0;i<max-count;i++) System.out.print(" ");
    }
}
class Main
{
    public static void main(String args[])
    {
        EcomSites obj=new EcomSites();
        System.out.println("\n");
        while(true)
        {
            EcomSites.mainmenu();
            System.out.print("Enter your choice ->");
            int choice=obj.sc.nextInt();
            System.out.println("\n");
            switch(choice)
            {
                case 1:
                    obj.max_budget();
                    break;
                case 2:
                    obj.min_budget();
                    break;
                case 3:
                    obj.min_quantity();
                    break;
                case 4:
                    obj.max_quantity();
                    break;
                case 5:
                    obj.sc.nextLine();
                    System.out.print("Enter Name of Product in operation -:");
                    
                    String name=obj.sc.nextLine();
                    System.out.print("Enter New Budget -:");
                    int bud=obj.sc.nextInt();
                    System.out.println();
                    obj.change_budget(name,bud);
                    break;
                case 6:
                    obj.sc.nextLine();
                    System.out.print("Enter Name of Product in operation -:");
                    
                    name=obj.sc.nextLine();
                    System.out.print("Enter New Quantity -:");
                    bud=obj.sc.nextInt();
                    System.out.println();
                    obj.change_quantity(name,bud);
                    break;
                case 7:
                    obj.display();
                    break;
                case 8:
                    obj.bill();
                    break;
                case 9:
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
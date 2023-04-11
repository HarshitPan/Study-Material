import java.util.Scanner;
class Cal_Sal
{
    Scanner sc=new Scanner(System.in);
    double base;
    int special=5000;
    String name=new String();
    String Job_Status=new String();
    Cal_Sal()
    {
        System.out.print("Enter Name -: ");
        name=sc.nextLine();
        System.out.print("Enter Status -:"); 
        Job_Status=sc.nextLine();
      //  System.out.println(Job_Status);
        System.out.print("Enter Salary -: ");
        base = sc.nextInt();
        //char garbage;
        
        
        //net_sal();
        
    }
    double cal()
    {
        //System.out.println(Job_Status);
        if(Job_Status.equalsIgnoreCase("permanent"))
            return base+(0.1*base)+(0.5*base)+(0.05*base)+special;
        else if (Job_Status.equalsIgnoreCase("prohibition"))
            return base + (0.05*base);
        else
            return -1;
            //Job_Status.compartTo();
        //Job_Status.equals();
    }
    double cal(double g)
    {
        if(g<50000) return 0;
        else if(g<100000) return 0.1*g;
        else return 0.3*g;
    }
    void net_sal()
    {
        double gross=cal();
        if(gross==-1)
        {
            System.out.println("Invalid Job Status.");
            return;
        }
        double tax=cal(gross);
        //System.out.println(gross + " " + tax);
        System.out.println("Net Salary -> "+ (gross - tax - (0.12*gross)));
    }
    public static void main(String args[])
    {
        Cal_Sal obj=new Cal_Sal();
        obj.net_sal();
    }
}


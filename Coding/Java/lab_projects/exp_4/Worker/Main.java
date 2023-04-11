import java.util.Scanner;

abstract class Worker
{
    String name;
    int Salary_rate;
    Worker(String name,int sal)
    {
        this.name=name;
        Salary_rate=sal;
    }
    abstract void compay(int hours);
}
class DailyWorker extends Worker
{
    DailyWorker(String name,int sal)
    {
        super(name,sal);
    }
    void compay(int hours)
    {
        System.out.println("Total Weekly Salary for "+hours+" hours ->"+ 7*24*hours*Salary_rate);
    }
}
class SalariedWorker extends Worker
{
    SalariedWorker(String name,int sal)
    {
        super(name,sal);
    }
    void compay(int hours)
    {
        if(hours>40) hours=40;
        System.out.println("Total Salary for "+hours+" hours ->"+ hours*Salary_rate);
    }
}
class Main
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String name;
        System.out.print("Enter Name->");
        name=sc.nextLine();
        int sal;
        System.out.print("Enter Salary Rate ->");
        sal=sc.nextInt();
        System.out.print("Enter 0 for Daily Worker & 1 for Salaried Worker ->");
        int choice=sc.nextInt();
        switch(choice)
        {
            case 0:
                DailyWorker worker_1=new DailyWorker(name, sal);
                System.out.println("Enter the days "+name+" worked this week ->");
                int days=sc.nextInt();
                if(days>7 && days<0) System.out.println("Invalid No of Days...");
                else worker_1.compay(days);
                break;
            case 1:
                SalariedWorker worker_2=new SalariedWorker(name, sal);
                System.out.println("Enter the hours "+name+" worked this week ->");
                int hours=sc.nextInt();
                if(hours<0 && hours>24*7) System.out.println("No of Hours exceeded the most there can be in a week...");
                else worker_2.compay(hours);
                break;
            default:
                System.out.println("Invalid Input...");
        }
    }
}
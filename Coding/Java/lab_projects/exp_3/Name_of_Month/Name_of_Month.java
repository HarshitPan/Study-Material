import java.util.Scanner;
class Name_of_Month
{
    static String mon_name[]=new String[12];
    Name_of_Month()
    {
        mon_name[0]="Jan";
        mon_name[1]="Feb";
        mon_name[2]="March";
        mon_name[3]="April";
        mon_name[4]="May";
        mon_name[5]="June";
        mon_name[6]="July";
        mon_name[7]="Aug";
        mon_name[8]="Sep";
        mon_name[9]="Oct";
        mon_name[10]="Nov";
        mon_name[11]="Dec";
    }
    void entry()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter any number (1-12) ->");
        int num=sc.nextInt();
        disp(num);
    }
    private void disp(int i)
    {
        System.out.println("Name of Month "+i+" is -> "+Name_of_Month.mon_name[i-1]);
    }
    public static void main(String args[])
    {
        Name_of_Month obj=new Name_of_Month();
        obj.entry();
    }
}
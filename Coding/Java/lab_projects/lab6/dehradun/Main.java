package lab6.dehradun;
import java.util.Scanner;

import lab_projects.lab6.yourSpace.*;
class Boys_1 implements BoysHostels
{
    String hostel_name;
    int hostel_id;
    boolean check=true;
    Scanner sc=new Scanner(System.in);
    static int no_of_rooms,occupied;
    Boys_1()
    {
        hostel_id=0;
        no_of_rooms=0;
        occupied=0;
    }
    void enter()
    {
        System.out.print("Enter Hostel Name ->");
        hostel_name=sc.nextLine();
        System.out.print("Enter Hostel ID ->");
        hostel_id=sc.nextInt();
        System.out.print("Enter No of Rooms ->");
        no_of_rooms=sc.nextInt();
        System.out.print("Enter No of Occupied Rooms ->");
        while(true)
        {
            occupied=sc.nextInt();
            if(occupied==-1)
            {
                check=false;
                return;
            }
            if(occupied>no_of_rooms) 
            {
                System.out.println("Occupied rooms greater than total rooms...");
                System.out.println("Please Enter again(or type (-1) to exit ->");
            }
            else break;
            
        }
        System.out.println();
    }
    void hostel_info()
    {
        System.out.println("/*\\/*\\/*\\/*\\/*\\/*\\/*\\/*\\/*\\/*\\");
        System.out.println("Hostel Name -> "+hostel_name);
        System.out.println("Hostel ID -> "+ hostel_id);
        System.out.println("Vacant Rooms -> "+ getvacant());
    }
    int getvacant()
    {
        return no_of_rooms-occupied;
    }
    public void disp()
    {
        System.out.println("Organization Name -> "+org_name);
        System.out.println("Type of Hostel -> "+hostel_type);
        hostel_info();
    }
}
class Girls_1 implements GirlsHostels
{
    String hostel_name;
    int hostel_id;
    boolean check=true;
    Scanner sc=new Scanner(System.in);
    static int no_of_rooms,occupied;
    Girls_1()
    {
        hostel_id=0;
        no_of_rooms=0;
        occupied=0;
    }
    void enter()
    {
        System.out.print("Enter Hostel Name ->");
        hostel_name=sc.nextLine();
        System.out.print("Enter Hostel ID ->");
        hostel_id=sc.nextInt();
        System.out.print("Enter No of Rooms ->");
        no_of_rooms=sc.nextInt();
        System.out.print("Enter No of Occupied Rooms ->");
        while(true)
        {
            occupied=sc.nextInt();
            if(occupied==-1)
            {
                check=false;
                return;
            }
            if(occupied>no_of_rooms) 
            {
                System.out.println("Occupied rooms greater than total rooms...");
                System.out.println("Please Enter again(or type (-1) to exit ->");
            }
            else break;
            
        }
        System.out.println();
    }
    void hostel_info()
    {
        System.out.println("/*\\/*\\/*\\/*\\/*\\/*\\/*\\/*\\/*\\/*\\");
        System.out.println("Hostel Name -> "+hostel_name);
        System.out.println("Hostel ID -> "+ hostel_id);
        System.out.println("Vacant Rooms -> "+ getvacant());
    }
    int getvacant()
    {
        return no_of_rooms-occupied;
    }
    void disp()
    {
        System.out.println("Organization Name -> "+org_name);
        System.out.println("Type of Hostel -> "+hostel_type);
        hostel_info();
    }
}
public class Main {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String type;
        System.out.print("Boys or Girls ->");
        type=sc.nextLine();
        int pos=0;
        for(;type.charAt(pos)==' ' && pos<type.length();pos++);
        if(type.charAt(pos)=='B' || type.charAt(pos)=='b')
        {
            Boys_1 obj =new Boys_1();
            obj.enter();
            if(obj.check==false) return;
            obj.disp();
        }
        else if(type.charAt(pos)=='G' || type.charAt(pos)=='g')
        {
            Girls_1 obj=new Girls_1();
            obj.enter();
            if(obj.check==false) return;
            obj.disp();
        }
    }
}

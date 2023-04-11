
import java.util.Scanner;

public class String_Compare{
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter Base String ->");
        String base=sc.nextLine();
        System.out.print("Enter Sub-String ->");
        String sub=sc.nextLine();
        int first=-1,last=-1,j=0;
        boolean check=true;
        for(int i=0;i<=hbase.length()-sub.length();i++)
        {
            for(j=0;j<sub.length();j++)
            {
                if(base.charAt(i+j)!=sub.charAt(j))
                {
                    break;
                }
            }
            if(j==sub.length())
            {
                if(check)
                {
                    check=false;
                    first=i;
                    last=i;
                }
                else 
                {
                    last=i;
                }
            }
        }
        System.out.println("first ->" + first);
        System.out.println("last ->" + last);
    }
}

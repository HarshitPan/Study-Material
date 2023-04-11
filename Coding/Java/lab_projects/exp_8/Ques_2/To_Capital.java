import java.util.Scanner;
public class To_Capital {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter a String ->");
        String str=sc.nextLine();
        StringBuilder string_builder=new StringBuilder(str);
        for(int i=0;i<string_builder.length();i++)
        {
            char current=string_builder.charAt(i);
            if(current>=97 && current<97+26)
            {
                string_builder.insert(i,(char)((int)current-(97-65)));
                string_builder.deleteCharAt(i+1);
            }
        }
        System.out.println(string_builder);
    }
}

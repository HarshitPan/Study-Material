import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> list=new ArrayList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(4);

        //copying another collection to hashset
        HashSet<Integer> set=new HashSet<>(list);
        System.out.println(set);

        //deleting all entries at one call
        set.clear();
        System.out.println(set);
        
        
        set=new HashSet<>(list);

        //find user defined object from hashset
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the value to search ->");
        Integer obj=sc.nextInt();
        if(set.contains(obj))
        {
            System.out.println("Value present in HashSet.");
        }
        else
            System.out.println("Value not present in hashset.");
    }    
}

import java.util.ArrayList;
import java.util.Iterator;

public class Main{
    public static void main(String[] args) {
        ArrayList<Integer> list=new ArrayList<Integer>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);
        System.out.print("1. ");
        //Iterating in an ArrayList
        Iterator<Integer> itr=list.iterator();
        while(itr.hasNext()){
            System.out.print(itr.next()+" ");
        }
        System.out.println();
        System.out.print("2. ");
        //Duplicating ArrayList
        ArrayList<Integer> dup_list=new ArrayList<>(list);
        System.out.println(dup_list);
        System.out.print("3. ");
        //ArrayList in reverse
        for(int i=list.size()-1;i>=0;i--)
        {
            System.out.print(list.get(i)+" ");
        }
        System.out.println();
    }    
}
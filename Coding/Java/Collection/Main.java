import java.util.*;
import java.io.*;

class Main{
    public static void main(String[] args) {
        int arr[]=new int[]{1,2,3,4};
        Integer obj=20;
        System.out.println(obj);

        Vector<Integer> v=new Vector<Integer>();
        Hashtable<Integer,String> h=new Hashtable<Integer,String>();
        v.addElement(1);
        v.addElement(2);
        h.put(1,"Harshit");
        h.put(2,"Anuskh");
        System.out.println(arr[0]);
        System.out.println(v.elementAt(0));
        System.out.println(h.get(2)+h.get(0)+"a");

    }
}
import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        HashMap<Integer,String> dict=new HashMap<>();
        dict.put(1,"First");
        dict.put(2,"Second");
        dict.put(1,"Third");

        //Checking if key is present.
        if(dict.containsKey(1))
        {
            System.out.println("Key '1' is present.");
        }
        else {
            System.out.println("Key '1' not Present.");
        }
        
        //Contains Value or not
        if(dict.containsValue("First"))
        {
            System.out.println("Value 'First' is present.");
        }
        else {
            System.out.println("Value 'First' not Present.");
        }    
        
        //All keys
        System.out.println(dict.keySet());

        //All Entry Key-Value Pair
        System.out.println(dict.entrySet());
    }
}
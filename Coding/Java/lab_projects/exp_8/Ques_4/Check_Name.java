public class Check_Name {
    public static void main(String[] args) {
        String name="Harshit Pandey";
        int countgap=0;
        int count_a=0;
        int arr[]=new int[name.length()];
        for(int i=0;i<name.length();i++)
        {
            if(name.charAt(i)==' ') countgap++;
            else if(name.charAt(i)=='a')
            {
                arr[count_a]=i;
                count_a++;
            }
        }
        System.out.println("Length of name -> "+(name.length()-countgap));
        System.out.println();
        System.out.println("No of times 'a' occured -> "+count_a);
        System.out.println();
        System.out.print("All locations where a is present -> ");
        for(int i=0;i<count_a;i++)
        {
            System.out.print(arr[i]+" , ");
        }
        System.out.println();
    }
}

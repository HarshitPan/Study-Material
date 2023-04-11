class Main
{
    static int rollno[]=new int[10];
    static String names[]=new String[10];
    static void input()
    {
        for(int i=0;i<10;i++)
        {
            rollno[i]=i+1;
            names[i]="";
            names[i]+=(char)(i+65);
        }
    }
    public static void main(String[] args) {
        input();
        try{
            int i=0;
            throw new NumberFormatException();
            // while(true)
            // {
            //     System.out.print(rollno[i]+" -> "+names[i]);
            //     i+=1;
            // }
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println();
            System.out.println(e.getMessage());
        }
        System.out.println("End");
    }
}
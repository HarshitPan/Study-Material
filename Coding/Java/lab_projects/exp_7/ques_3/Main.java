class Main
{
    public static void main(String[] args) {
        try{
            for(int i=0;i<args.length;i++)
            {
                int x=Integer.parseInt(args[i]);
            }
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}
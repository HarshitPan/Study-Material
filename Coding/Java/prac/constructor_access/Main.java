class Main1
{
    private Main1()
    {
        System.out.println("No Parameter...");
    }
    public Main1(int a)
    {
        System.out.println(a);
    }
};
class Main
{
    public static void main(String[] args) {
        Main1 obj=new Main1();
        Main1 obj2=new Main1(10);
    }
}
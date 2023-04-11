interface A
{
    void disp();
}
interface B
{
    void disp();
}
class Try implements A,B
{
    public void disp()
    {
        System.out.println("This is A.");
    }
}
class Main
{
    public static void main(String args[])
    {
        Try obj =new Try();
        obj.disp();
    }
}
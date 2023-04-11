class Check
{
    private int a=10;
    void disp_a()
    {
        System.out.println("a -> "+a);
    }
}
class Private
{
    public static void main(String[] args) {
        Check obj=new Check();
        obj.disp_a();
        System.out.println("a -> "+obj.a);   
    }
}
interface A
{
    void meth1();
    void meth2();
}
class MyClass
{
    public void meth1()
    {
        System.out.println("This is Meth 1.");
    }
    public void meth2()
    {
        System.out.println("This is meth 2.");
    }
    public static void main(String[] args) {
        MyClass obj=new MyClass();
        obj.meth1();
        obj.meth2();
    }
}
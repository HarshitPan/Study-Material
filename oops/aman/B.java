class A
{
    A()
    {
        System.out.println("A");
    }
}
class C extends A
{
    C()
    {
        super();
        System.out.println("C");
    }
}
class B
{
    public static void main(String[] args) {
        A onm=new C();

    }
}
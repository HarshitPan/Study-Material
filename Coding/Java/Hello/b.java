class trying
{
    static void func()
    {
        System.out.println("A");   
    }
}
class b extends trying
    {
        static void func()
        {
            System.out.println("B");
        }
        public static void main(String args[])
        {
            b b1=new b();
           // super().func();
        }
    }


interface temp
{
    int division(int a,int b);
    int modulus(int a,int b);
}
class Main
{
    public int division(int a,int b)
    {
        return a/b;
    }
    public int modulus(int a,int b)
    {
        return a%b;
    }
    public static void main(String[] args) {
        Main obj=new Main();
        System.out.println(obj.division(10,5));
        System.out.println(obj.modulus(10,7));
    }
}
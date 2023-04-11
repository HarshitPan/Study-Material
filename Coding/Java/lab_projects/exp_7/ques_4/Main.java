class Collision extends Exception
{
    public Collision()
    {
        super("Collision will occur...");
    }
    public Collision(String s)
    {
        super(s);
    }
}
class Main
{
    int direction; // 1 for forward and 2 for backward...
    void enter_direction(int direction)
    {
        this.direction = direction;
    }
    public static void main(String[] args) {
        Main vehicle_1=new Main();
        Main vehicle_2=new Main();
        vehicle_1.enter_direction(1);
        vehicle_2.enter_direction(2);
        int a=vehicle_1.direction;
        int b=vehicle_2.direction;
        try{
            if(a!=b)
            {
                throw new Collision("Collision occured...");
            }
        }
        catch(Collision e)
        {
            System.out.println(e.getMessage());
        }
    }
}

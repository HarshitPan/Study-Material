import java.util.Scanner;

abstract class Player
{
    static Scanner sc=new Scanner(System.in);
    private int player_no;
    String game_name;
    String names[];
    Player(int p)
    {
        player_no=p;
    }
    int get_players()
    {
        return player_no;
    }
    void input()
    {
        names=new String[player_no];
        for(int i=0;i<player_no;i++)
        {
            System.out.print("Enter Player "+(i+1)+" ->");
            names[i]=Player.sc.nextLine();
        }
        System.out.println();
    }
    abstract void disp();
}
class Cricket_Player extends Player
{
    Cricket_Player(int p)
    {
        super(p);
        game_name="Cricket";
    }
    void disp()
    {
        System.out.println("Game - "+game_name);
        System.out.println();
        System.out.println("Players -:");
        for(int i=0;i<get_players();i++)
        {
            System.out.println((i+1)+". "+names[i]);
        }
    }   
}
class Football_Player extends Player
{
    Football_Player(int p)
    {
        super(p);
        game_name="Cricket";
    }
    void disp()
    {
        System.out.println("Game - "+game_name);
        System.out.println();
        System.out.println("Players -:");
        for(int i=0;i<get_players();i++)
        {
            System.out.println((i+1)+". "+names[i]);
        }
    }   
}
class Hockey_Player extends Player
{
    Hockey_Player(int p)
    {
        super(p);
        game_name="Cricket";
    }
    void disp()
    {
        System.out.println("Game - "+game_name);
        System.out.println();
        System.out.println("Players -:");
        for(int i=0;i<get_players();i++)
        {
            System.out.println((i+1)+". "+names[i]);
        }
    }   
}
class Main
{
    public static void main(String[] args) {
        System.out.println("Select your sport ->");
        System.out.println("1. Cricket");
        System.out.println("2. Football");
        System.out.println("3. Hockey");
        System.out.print("Enter Your Choice -:");
        int choice=Player.sc.nextInt();
        System.out.println();
        Player.sc.nextLine();
        if(choice<1 && choice>3)
        {
            System.out.println("Invalid Choice...");
            return;
        }
        System.out.print("Enter no of players ->");
        int no=Player.sc.nextInt();
        Player.sc.nextLine();
        System.out.println();
        switch(choice)
        {
            case 1:
                Cricket_Player obj=new Cricket_Player(no);
                obj.input();
                obj.disp();
                break;
            case 2:
                Football_Player obj2=new Football_Player(no);
                obj2.input();
                obj2.disp();
                break;
            case 3:
                Hockey_Player obj3=new Hockey_Player(no);
                obj3.input();
                obj3.disp();
            default:
                System.out.println("Invalid Choice...");
        }
    }
}
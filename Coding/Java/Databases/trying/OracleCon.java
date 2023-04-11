/*

public static void forName(String DriverName);

public static connection getconnection(String url,String name,String password);

public statement createStatement()

statement stm=con.createStatement;

public resultset executequery(String sql);

ResultSet rs=stm.executequery("Select * from employee");

while(rs.next())
{
    System.out.println(rs.getInt(1)+" "+rs.getString(2));
}
public static void close()
con.close();

*/
import java.sql.*;
class OracleCon
{
    public static void main(String args[])
    {
        try{
            //load the driver class
            //Class.forName("oracle.jdbc.driver.OracleDriver");
            Class.forName("com.mysql.cj.jdbc.Driver");
            //create the connection
            Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","oracle");
            //create the statement object
            Statement stmt=con.createStatement();
            //execute query
            ResultSet rs=stmt.executeQuery("select * from emp");
            while(rs.next())
            {
                System.out.println(rs.getInt(1)+" "+rs.getString(2));
            }
            con.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class Employee
{
	String name;
	int empid;
	int salary;
	Employee()     //default constructor
	{
		this.name = "----";
		this.empid = 0;
		this.salary = 0;
	}
	Employee(String n,int e,int s)  //parameterized constructor
	{
		this.name=n;
		this.empid=e;
		this.salary=s;	
	}
	String names()   //method to return name
	{
		return this.name;
	}
	int salaries()   //method to return salary
 	{
 		return salary;
 	}
	double increaseSalary(double per_rate)  //increase salary
	{
		double a = (this.salary*(per_rate/100));
		double s = this.salary + a;
		return s;
	}
}
public class Manager extends Employee {	
	String department="CSE";
	public static void main(String[] args) {
		Employee obj = new Employee("Harshit", 34, 234567);
		System.out.println(obj.names());
		System.out.println(obj.salary);
		System.out.println(obj.increaseSalary(3.4));
	}
}


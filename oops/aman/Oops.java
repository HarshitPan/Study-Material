import java.util.*;

class Dog{
	String name ;
	String colour;
	int age;
	int weight;
	
	public void name(){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the name of the Dog");
		String name= sc.next();
		System.out.println("The dog name is " +name);
	}
    
	public void size() {
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the size of Dog(Small/ Medium/ Large)");
		String size= sc.next();
		System.out.print("The size of the dog is " +size);
	}
	
	public void eat() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter diet of dog");
		String diet = sc.next();
		System.out.println("The dog diet is " +diet);
	}
	
	
	public void exercise() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter daily walking distance of dog in km");
		String walk = sc.next();
		System.out.println("Dog daily walking distance "  +walk);		
	}
	
	public void printInfo(){
		System.out.println( "The name of the dog owner is is " +this.name);
		System.out.println("The dog colour is " +this.colour);
		System.out.println("The age of the dog is " +this.age);
		System.out.println("The weight of dog is " +this.weight);
	}
	


	Dog(boolean a){
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter dog owner name");
		String name = sc.next();		
		
		System.out.println("Enter dog colour");
		String colour = sc.next();
		
		System.out.println("Enter dog age");
		int age = sc.nextInt();
		
		System.out.println("Enter dog weight");
		int weight = sc.nextInt();
		
		
		this.name= name;
		this.colour= colour;
		this.age= age;
		this.weight = weight;
	}
    Dog()
    {
        
    }
}
 
//child class
class Breed extends Dog{
	public void breed() {
		System.out.println("Select breed \n 1.Pug \n 2.Labrador \n 3.Bull Dog \n 4.Huskey");
		Scanner sc= new Scanner(System.in);
		int sel= sc.nextInt();
		if(sel==1) {
			System.out.println("Dog breed is pug");
		}
		
		else if(sel==2) {
			System.out.println("Dog breed is Labrador");
		}
		
		else if(sel==3) {
			System.out.println("Dog breed is Bull Dog");
		}
		
		else if(sel==4) {
			System.out.println("Dog breed is Huskey");
		}
		
		else {
			System.out.print("Dog is of other breed. Please mention its breed");
			String c = sc.next(); 
		}
	}
}


public class Oops {
	public static void main(String[] args) {

		Dog d1= new Dog(true);
		
		while(true)
		{
			Scanner sc = new Scanner(System.in);
			System.out.print("\n 1.Enter the name of dog "
					+ "\n 2.Enter the diet of dog"
					+ " \n 3.Enter the daily walking distance of dog"
					+ "\n 4.Print all Info "
					+ "\n 5. Enter Dog breed"
					+ "\n 6.Exit"
					+ "\n Select Option:");
			int num = sc.nextInt();
		switch(num) {
		
		
		case 1:
			d1.name();
			break;
			
		case 2:
			d1.eat();
            break;
            
		case 3:
			d1.exercise();
			break;
			
		case 4:
			d1.printInfo();
			break;
			
		case 5:
			Breed d2 = new Breed();
			d2.breed();
			d2.size();
			break;
			
		case 6:
			System.exit(0);
			break;
		
		default:
			System.out.println("Invalid Case");
		}
		System.out.println();
        System.out.print("Press Enter to continue...");
        System.out.println("\n");
	}
	
}
}
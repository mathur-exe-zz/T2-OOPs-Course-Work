package First;
import java.util.Scanner;
public class Main 
{
	public static void main(String[] args)
	{
		Scanner p=new Scanner(System.in);
		int i,n,m;
		System.out.println("Enter no of Ece students");
		n=p.nextInt();
		Ece E[]=new Ece[n];
		for(i=0;i<n;i++)
			E[i]= new Ece();         //Array of objects
		
		for(i=0;i<n;i++)
		{
			System.out.println("Enter details of Ece students"+(i+1));
			System.out.println("Name");
			System.out.println("Roll");
			System.out.println("Tri");
			System.out.println("Sub1");
			System.out.println("Sub2");
			System.out.println("Marks");
	        E[i].get();
			E[i].get_marks();
		}
		
		System.out.println("Enter no of Mech students");
		m=p.nextInt();
		Mech M[]=new Mech[m];
		for(i=0;i<m;i++)
			M[i]= new Mech();         //Array of objects
		
		
		for(i=0;i<m;i++){
            System.out.println("Enter details of Mech students"+(i+1));
            System.out.println("Name");
            System.out.println("Roll");
            System.out.println("Tri");
            System.out.println("Sub1");
            System.out.println("Sub2");
            System.out.println("Marks");
	        M[i].get();
			M[i].get_marks();
		}
		
		System.out.println("Database of Ece students");
		System.out.print("Name\t");
		System.out.print("Roll\t");
		System.out.print("Tri\t");
		System.out.print("Sub1\t");
		System.out.print("Sub2\t");
		System.out.println("Marks");
		for(i=0;i<n;i++) E[i].print();
		
		System.out.println("Database of Mech students");
		System.out.print("Name\t");
		System.out.print("Roll\t");
		System.out.print("Tri\t");
		System.out.print("Sub1\t");
		System.out.print("Sub2\t");
		System.out.println("Marks");
		for(i=0;i<m;i++) M[i].print();
	}

}
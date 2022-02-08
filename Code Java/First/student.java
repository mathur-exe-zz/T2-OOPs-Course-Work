package First;
import java.util.Scanner;

class student
{
	String name;
	int Roll_no;
	int Tri;
	void get()
	{
		Scanner p = new Scanner(System.in);
		name=p.next();
		Roll_no=p.nextInt();
		Tri=p.nextInt();
	}
	void print()
	{
		System.out.print(name+"\t");
		System.out.print(Roll_no+"\t");
		System.out.print(Tri+"\t");
	}
}

class Ece extends student
{
	String Sub1, Sub2;
	int marks;
		void get_marks()
		{
			Scanner p=new Scanner(System.in);
			Sub1=p.next();
			Sub2=p.next();
			marks=p.nextInt();
		}
		void print()
		{
			super.print();
			System.out.print(Sub1+"\t");
			System.out.print(Sub2+"\t");
			System.out.println(marks);
		}
}

class Mech extends student
{
	String Sub1, Sub2;
	int marks;
		void get_marks()
		{
			Scanner p=new Scanner(System.in);
			Sub1=p.next();
			Sub2=p.next();
			marks=p.nextInt();
		}
		void print()
		{
			super.print();
			System.out.print(Sub1+"\t");
			System.out.print(Sub2+"\t");
			System.out.println(marks);
		}
}
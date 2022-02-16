class T1 extends Thread{
    public void run()
	{
		for(int i=0;i<5;i++)
			System.out.println("Thread 1 i="+i);
		System.out.println("Exit from Thread 1");
	}
}

class T2 extends Thread{
	public void run()
	{
		for(int j=0;j<5;j++)
			System.out.println("Thread 2 j="+j);
		System.out.println("Exit from Thread 2");
	}
}

class T3 extends Thread{
	public void run()
	{
		for(int k=0;k<5;k++)
			System.out.println("Thread 3 k="+k);
		System.out.println("Exit from Thread 3");
	}
}

public class multithreading {
	public static void main(String[] args){
		T1 a=new T1();
		T2 b=new T2();
		T3 c=new T3();
		a.start();
		b.start();
		c.start();
	}
}

package Pack1;
public class Test1 {
    int a_de = 10;
	private int a_pri = 20;
	protected int a_pro = 30;
	public int a_pub = 40;
	void show(){
        System.out.println("a_de="+a_de);
		System.out.println("a_pri="+a_pri);
		System.out.println("a_pro="+a_pro);
		System.out.println("a_pub="+a_pub);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Test1 ob = new Test1();
		ob.show();
	}
}

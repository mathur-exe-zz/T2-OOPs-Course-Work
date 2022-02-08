import java.util.Scanner;

public class arthimetic_operation{

    public static long fact(int n){
        long f=1;
        for (int i = 1; i <= n ; i++) { f *= i; }
        return f; 
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum, diff, multi;
        double div;

        System.out.println("Num for fact: ");
        int n = sc.nextInt();

        sum = a+b;
        diff = a>b? a-b : b-a;
        multi = a*b;
        div = a/b; 
        System.out.println("\n Add: " + sum + "\n Difference: "+diff+"\n Product: "+multi+"\n Division: "+div);
        
        if(n>0) {
            System.out.println("Factorial val: "+fact(n));
        }
    }
} 
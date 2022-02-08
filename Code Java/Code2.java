import java.util.Scanner; 
import java.util.Arrays;
    
class array2 {
        void display_int(int a[]) 
        {
            int i;
            for(i=0; i<a.length; i++) 
            System.out.println(a[i]);
        } 
        void display_str(String s[])
        {
            int i;
            for(i=0; i<s.length; i++) 
            System.out.println(s[i]);
        }
}
    
public class Code2 
   { 
        public static void main(String[] args) 
        {
            Scanner p=new Scanner(System.in);
            array2 ob=new array2(); 
            int n,i;
            int choice;
            while(true) {
                System.out.println("\n1. Int Array Sorting");
                System.out.println("2. Strn Array Sorting");
                System.out.println("3. Quit\n ");
            System.out.println("Enter your choice: ");
                choice = p.nextInt();
                
                switch (choice) {
            case 1: System.out.println("Enter no of elements"); 
            n=p.nextInt();
            int a[]=new int[n];
            System.out.println("Enter int array elements"); 
            for(i=0;i<n; i++)
            a[i]=p.nextInt ();
            System.out.println("Int Array before sorting"); 
            ob.display_int(a); Arrays.sort(a); 
            System.out.println("Int Array after sorting"); 
            ob.display_int(a);
            break;
            case 2: System.out.println("Enter no of elements"); 
            n=p.nextInt();
            String str[]=new String[n];
            System.out.println("Enter string array elements");
            for(i=0; i<n;i++)
            str[i]=p.next();
            System.out.println("String Array before sorting"); 
            ob.display_str(str);
            System.out.println("String Array after sorting");
            Arrays.sort(str);
            ob.display_str(str);
            break;
            case 3: System.exit(0);
            default:
            System.out.println("Invalid choice!!! Please make a valid choice. \n");
                }
            }
        }
}   

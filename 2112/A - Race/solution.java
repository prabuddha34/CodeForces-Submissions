import java.util.Scanner;
 
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); 
 
        while (t-- > 0) {
            int a = sc.nextInt(); 
            int x = sc.nextInt(); 
            int y = sc.nextInt(); 
 
            boolean found = false;
 
           
            for (int bob = 1; bob <= 100; bob++) {
                if (bob == a) continue;
 
                int d1 = Math.abs(bob - x);
                int d2 = Math.abs(bob - y);
                int a1 = Math.abs(a - x);
                int a2 = Math.abs(a - y);
 
            
                if (d1 < a1 && d2 < a2) {
                    found = true;
                    break;
                }
            }
 
            System.out.println(found ? "YES" : "NO");
        }
 
        sc.close();
    }
}
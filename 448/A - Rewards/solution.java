import java.util.*;
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        /*
         * ains integers a1, a2 and a3 (0 ≤ a1, a2, a3 ≤ 100). The second line contains integers b1, b2 and b3 (0 ≤ b1, b2, b3 ≤ 100). The third line contains integer n (1 ≤ n ≤ 100).
         * 
         */
        int a1 = sc.nextInt();
        int a2 = sc.nextInt();  
        int a3 = sc.nextInt();
        int b1 = sc.nextInt();  
        int b2 = sc.nextInt();
        int b3 = sc.nextInt();
        int n = sc.nextInt();
 
           int totalCups = a1 + a2 + a3;
        int totalMedals = b1 + b2 + b3;
 
        int cupShelves = (totalCups + 4) / 5;     
        int medalShelves = (totalMedals + 9) / 10; 
 
  if (cupShelves + medalShelves <= n) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
 
        sc.close();
 
 
 }
}
import java.util.*;
public class Main {
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int m=sc.nextInt();
     
     int q = n / m; // Base candies
     int r = n % m; // Remainder
     for (int i = 0; i < m; i++) {
         if (i < r) {
             System.out.print((q + 1) + " "); // Distribute one extra candy to the first 'r' children
         } else {
             System.out.print(q + " "); // Distribute base candies to the rest
         }
 
    }
}
}
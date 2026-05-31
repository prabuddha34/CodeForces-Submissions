import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        String x = sc.next();
        String y = sc.next();
 
        int n = x.length();
        StringBuilder z = new StringBuilder();
 
        for (int i = 0; i < n; i++) {
            char xi = x.charAt(i);
            char yi = y.charAt(i);
 
            if (yi > xi) {
                System.out.println(-1);
                return;
            }
 
            if (yi == xi) {
                z.append(xi);
            } else {
                z.append(yi);
            }
        }
 
        System.out.println(z.toString());
    }
}
import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        boolean goodPerformance = false;
 
        for (int i = 0; i < n; i++) {
            String handle = sc.next(); 
            int before = sc.nextInt();
            int after = sc.nextInt();
 
            if (before >= 2400 && after > before) {
                goodPerformance = true;
            }
        }
 
        System.out.println(goodPerformance ? "YES" : "NO");
        sc.close();
    }
}
 
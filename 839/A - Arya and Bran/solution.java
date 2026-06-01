import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int k = sc.nextInt();
 
        int stock = 0;
        int given = 0;
 
        for (int i = 1; i <= n; i++) {
            stock += sc.nextInt();
 
            int today = Math.min(8, stock);
            stock -= today;
            given += today;
 
            if (given >= k) {
                System.out.println(i);
                return; // stop immediately
            }
        }
 
        System.out.println(-1);
    }
}
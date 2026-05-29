import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int k = sc.nextInt();
 
        int[] a = new int[n];
 
        int max = 0;
 
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            max = Math.max(max, a[i]);
        }
 
        int ans = 0;
 
        // try all possible speeds
        for (int x = 1; x <= max; x++) {
 
            int count = 0;
 
            for (int i = 0; i < n; i++) {
                if (a[i] >= x) {
                    count++;
                }
            }
 
            if (count >= k) {
                ans = x;
            }
        }
 
        System.out.println(ans);
    }
}
import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        long k = sc.nextLong();
 
        long[] a = new long[n];
 
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
        }
 
        long mod = a[0] % k;
 
        for (int i = 1; i < n; i++) {
            if (a[i] % k != mod) {
                System.out.println(-1);
                return;
            }
        }
 
        Arrays.sort(a);
 
        long min = a[0];
        long ans = 0;
 
        for (int i = 1; i < n; i++) {
            ans += (a[i] - min) / k;
        }
 
        System.out.println(ans);
    }
}
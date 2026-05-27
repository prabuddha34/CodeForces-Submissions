import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        long d = sc.nextLong();
 
        long[] a = new long[n];
 
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
        }
 
        long moves = 0;
        long prev = a[0];
 
        for (int i = 1; i < n; i++) {
 
            if (a[i] > prev) {
                prev = a[i];
                continue;
            }
 
            long need = prev + 1;          // we need a[i] >= need
            long diff = need - a[i];       // how far we are
 
            long k = (diff + d - 1) / d;   // ceil division
 
            moves += k;
            a[i] += k * d;
            prev = a[i];
        }
 
        System.out.println(moves);
    }
}
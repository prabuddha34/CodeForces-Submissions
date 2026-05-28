import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int k = sc.nextInt();
 
        int[] a = new int[n];
 
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
 
        Arrays.sort(a);
 
        for (int i = 0; i < n; i++) {
 
            int t = a[i];
 
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] >= t) cnt++;
            }
 
            if (cnt == k) {
                System.out.println(t + " " + 0);
                return;
            }
        }
 
        System.out.println(-1);
    }
}
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int[] a = new int[n];
 
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
 
        int answer = Integer.MAX_VALUE;
 
        // Try removing each middle hold
        for (int remove = 1; remove < n - 1; remove++) {
 
            int maxDiff = 0;
 
            for (int i = 1; i < n; i++) {
 
                // skip removed hold
                if (i == remove) continue;
 
                // special gap after removal
                if (i == remove + 1) {
                    maxDiff = Math.max(maxDiff, a[i] - a[i - 2]);
                } else {
                    maxDiff = Math.max(maxDiff, a[i] - a[i - 1]);
                }
            }
 
            answer = Math.min(answer, maxDiff);
        }
 
        System.out.println(answer);
    }
}
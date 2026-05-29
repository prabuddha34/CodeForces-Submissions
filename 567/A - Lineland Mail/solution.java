import java.util.*;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int[] x = new int[n];
 
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
        }
 
        for (int i = 0; i < n; i++) {
 
            int minDist;
            int maxDist;
 
            // minimum distance
            if (i == 0) {
                minDist = x[i + 1] - x[i];
            } else if (i == n - 1) {
                minDist = x[i] - x[i - 1];
            } else {
                minDist = Math.min(x[i] - x[i - 1], x[i + 1] - x[i]);
            }
 
            // maximum distance
            maxDist = Math.max(x[i] - x[0], x[n - 1] - x[i]);
 
            System.out.println(minDist + " " + maxDist);
        }
    }
}
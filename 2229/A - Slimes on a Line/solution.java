import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int t = sc.nextInt();
 
        while (t-- > 0) {
 
            int n = sc.nextInt();
 
            int[] arr = new int[n];
 
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
 
            int maxDiff = 0;
 
            // Compare every pair
            for (int i = 0; i < n; i++) {
 
                for (int j = 0; j < n; j++) {
 
                    int diff = Math.abs(arr[i] - arr[j]);
 
                    if (diff > maxDiff) {
                        maxDiff = diff;
                    }
                }
            }
 
            System.out.println((maxDiff + 1) / 2);
        }
    }
}
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int t = sc.nextInt();
 
        while (t-- > 0) {
 
            int n = sc.nextInt();
            int H = sc.nextInt();
            int M = sc.nextInt();
 
            int start = H * 60 + M;
 
            int ans = 24 * 60;
 
            for (int i = 0; i < n; i++) {
 
                int h = sc.nextInt();
                int m = sc.nextInt();
 
                int alarm = h * 60 + m;
 
                int diff;
 
                if (alarm >= start) {
                    diff = alarm - start;
                } else {
                    diff = (24 * 60 - start) + alarm;
                }
 
                ans = Math.min(ans, diff);
            }
 
            int hours = ans / 60;
            int mins = ans % 60;
 
            System.out.println(hours + " " + mins);
        }
    }
}
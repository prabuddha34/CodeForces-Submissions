import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int m = sc.nextInt();
 
        int a[][] = new int[n][m];
        int max[] = new int[m];
 
        // input
        for (int i = 0; i < n; i++) {
 
            String str = sc.next();
 
            for (int j = 0; j < m; j++) {
 
                a[i][j] = str.charAt(j) - '0';
 
                if (a[i][j] > max[j]) {
                    max[j] = a[i][j];
                }
            }
        }
 
        boolean good[] = new boolean[n];
 
        // check successful students
        for (int i = 0; i < n; i++) {
 
            for (int j = 0; j < m; j++) {
 
                if (a[i][j] == max[j]) {
                    good[i] = true;
                }
            }
        }
 
        int count = 0;
 
        for (int i = 0; i < n; i++) {
 
            if (good[i]) {
                count++;
            }
        }
 
        System.out.println(count);
    }
}
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
 
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }
 
        int m = input.nextInt();
 
        int b[] = new int[m];
        for (int i = 0; i < m; i++) {
            b[i] = input.nextInt();
        }
 
        int maxRatio = 0;
        int count = 0;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
 
                if (b[j] % a[i] == 0) {
                    int ratio = b[j] / a[i];
 
                    if (ratio > maxRatio) {
                        maxRatio = ratio;
                        count = 1;
                    } 
                    else if (ratio == maxRatio) {
                        count++;
                    }
                }
            }
        }
 
        System.out.println(count);
    }
}
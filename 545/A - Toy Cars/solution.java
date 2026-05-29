import java.util.*;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
 
        int[] good = new int[n];
        int count = 0;
 
        for (int i = 0; i < n; i++) {
 
            boolean isGood = true;
 
            for (int j = 0; j < n; j++) {
                int x = sc.nextInt();
 
                if (x == 1 || x == 3) {
                    isGood = false;
                }
            }
 
            if (isGood) {
                good[count++] = i + 1; // 1-based index
            }
        }
 
        System.out.println(count);
 
        for (int i = 0; i < count; i++) {
            System.out.print(good[i] + " ");
        }
    }
}
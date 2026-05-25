import java.util.*;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
 
        int[] result = new int[n + 1];
 
        for (int i = 1; i <= n; i++) {
 
            int p = sc.nextInt();
 
            result[p] = i;
        }
 
        for (int i = 1; i <= n; i++) {
            System.out.print(result[i] + " ");
        }
    }
}
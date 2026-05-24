import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int p = scanner.nextInt();
        int[] arr = new int[n + 1];
        for (int i = 0; i < p; i++) {
            int level = scanner.nextInt();
            arr[level] = 1;
        }
 
        int q = scanner.nextInt(); 
        for (int i = 0; i < q; i++) {
            int level = scanner.nextInt();
            arr[level] = 1;
        }
 
        boolean allCovered = true;
        for (int i = 1; i <= n; i++) {
            if (arr[i] == 0) {
                allCovered = false;
                break;
            }
        }
 
        if (allCovered) {
            System.out.println("I become the guy.");
        } else {
            System.out.println("Oh, my keyboard!");
        }
 
        scanner.close();
    }
}
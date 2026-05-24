import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int n = scanner.nextInt(); // total ranks
        int[] d = new int[n - 1];
 
        for (int i = 0; i < n - 1; i++) {
            d[i] = scanner.nextInt();
        }
 
        int a = scanner.nextInt();
        int b = scanner.nextInt();
 
        int totalYears = 0;
        for (int i = a - 1; i < b - 1; i++) {
            totalYears += d[i];
        }
 
        System.out.println(totalYears);
    }
}
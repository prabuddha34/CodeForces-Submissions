import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(); // number of rows
        int m = scanner.nextInt(); // number of columns
 
        for (int i = 0; i < n * m; i++) {
            char pixel = scanner.next().charAt(0);
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                System.out.println("#Color");
                return;
            }
        }
 
        System.out.println("#Black&White");
    }
}
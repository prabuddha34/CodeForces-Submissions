import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong(); // Use long for large input
        int luckyCount = 0;
 
        while (n != 0) {
            long rem = n % 10;
            if (rem == 4 || rem == 7) {
                luckyCount++;
            }
            n /= 10;
        }
 
        if (luckyCount == 4 || luckyCount == 7) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
 
        scanner.close();
    }
}
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        long a = scanner.nextLong();
        long b = scanner.nextLong();
 
        int min = (int) Math.min(a, b); 
 
        long fact = 1;
        for (int i = 2; i <= min; i++) {
            fact *= i;
        }
 
        System.out.println(fact);
        scanner.close();
    }
}
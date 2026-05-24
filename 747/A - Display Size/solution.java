import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        int bestA = 1;
        int bestB = n;
 
        for (int a = 1; a * a <= n; a++) {
            if (n % a == 0) {
                int b = n / a;
                if (a <= b && (b - a) < (bestB - bestA)) {
                    bestA = a;
                    bestB = b;
                }
            }
        }
 
        System.out.println(bestA + " " + bestB);
    }
}
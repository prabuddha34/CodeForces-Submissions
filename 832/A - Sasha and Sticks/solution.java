import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        long n = scanner.nextLong();
        long k = scanner.nextLong(); 
 
        long totalMoves = n / k;
 
        if (totalMoves % 2 == 1) {
            System.out.println("YES");
        } else {
            System.out.println("NO");  
        }
 
        scanner.close();
    }
}
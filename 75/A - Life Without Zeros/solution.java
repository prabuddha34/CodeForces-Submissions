import java.util.Scanner;
 
public class Main {
 
    // Function to remove all zeros from a number
    public static int removeZeros(int number) {
        String noZeroString = Integer.toString(number).replace("0", "");
        return Integer.parseInt(noZeroString);
    }
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        // Read input numbers
        int a = scanner.nextInt();
        int b = scanner.nextInt();
 
        // Calculate c = a + b
        int c = a + b;
 
        // Remove zeros from a, b, and c
        int aNoZero = removeZeros(a);
        int bNoZero = removeZeros(b);
        int cNoZero = removeZeros(c);
 
        // Check if the equation holds after zero removal
        if (aNoZero + bNoZero == cNoZero) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
 
        scanner.close();
    }
}
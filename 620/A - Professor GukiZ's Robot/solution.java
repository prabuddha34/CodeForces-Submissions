import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        // Read starting coordinates
        int x1 = scanner.nextInt();
        int y1 = scanner.nextInt();
 
        // Read destination coordinates
        int x2 = scanner.nextInt();
        int y2 = scanner.nextInt();
 
        // Calculate minimal steps
        int steps = Math.max(Math.abs(x2 - x1), Math.abs(y2 - y1));
 
        // Output the result
        System.out.println(steps);
    }
}
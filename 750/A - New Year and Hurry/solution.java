import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner scanner = new Scanner(System.in);
 
        int n = scanner.nextInt(); // total problems
        int k = scanner.nextInt(); // travel time
 
        int remainingTime = 240 - k;
        int totalTime = 0;
        int count = 0;
 
        for (int i = 1; i <= n; i++) {
 
            totalTime += 5 * i;
 
            if (totalTime <= remainingTime) {
                count++;
            } else {
                break;
            }
        }
 
        System.out.println(count);
    }
}
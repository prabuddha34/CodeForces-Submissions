import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner scanner = new Scanner(System.in);
 
        int n = scanner.nextInt();
 
        for (int i = 0; i < n; i++) {
 
            int val = scanner.nextInt();
 
            if (val == 1) {
                System.out.println("HARD");
                return;
            }
        }
 
        System.out.println("EASY");
    }
}
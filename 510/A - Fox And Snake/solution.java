import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int m = input.nextInt();
        int n = input.nextInt();
 
        for (int i = 1; i <= m; i++) {
 
            // Odd rows -> full #
            if (i % 2 != 0) {
                for (int j = 1; j <= n; j++) {
                    System.out.print("#");
                }
            }
 
            // Even rows
            else {
 
                // Every 4th row -> # at beginning
                if (i % 4 == 0) {
                    System.out.print("#");
 
                    for (int j = 1; j < n; j++) {
                        System.out.print(".");
                    }
                }
 
                // Other even rows -> # at end
                else {
                    for (int j = 1; j < n; j++) {
                        System.out.print(".");
                    }
 
                    System.out.print("#");
                }
            }
 
            System.out.println();
        }
    }
}
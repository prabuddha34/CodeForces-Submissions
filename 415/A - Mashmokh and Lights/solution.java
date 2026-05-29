import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt(); // number of lights
        int m = input.nextInt(); // number of buttons pressed
 
        int[] buttons = new int[m];
 
        for (int i = 0; i < m; i++) {
            buttons[i] = input.nextInt();
        }
 
        boolean[] on = new boolean[n + 1];
        int[] ans = new int[n + 1];
 
        for (int i = 1; i <= n; i++) {
            on[i] = true;
        }
 
        for (int b : buttons) {
            for (int i = b; i <= n; i++) {
                if (on[i]) {
                    ans[i] = b;
                    on[i] = false;
                }
            }
        }
 
        for (int i = 1; i <= n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}
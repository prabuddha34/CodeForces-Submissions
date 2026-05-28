import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
 
        if (n <= 2) {
            System.out.println(-1);
            return;
        }
 
        for (int i = n; i >= 1; i--) {
            System.out.print(i + " ");
        }
    }
}
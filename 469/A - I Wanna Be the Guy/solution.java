import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
 
        boolean[] levels = new boolean[n + 1];
 
        // Little X
        int p = sc.nextInt();
 
        for (int i = 0; i < p; i++) {
 
            int x = sc.nextInt();
 
            levels[x] = true;
        }
 
        // Little Y
        int q = sc.nextInt();
 
        for (int i = 0; i < q; i++) {
 
            int y = sc.nextInt();
 
            levels[y] = true;
        }
 
        boolean canPass = true;
 
        for (int i = 1; i <= n; i++) {
 
            if (!levels[i]) {
                canPass = false;
                break;
            }
        }
 
        if (canPass) {
            System.out.println("I become the guy.");
        } else {
            System.out.println("Oh, my keyboard!");
        }
    }
}
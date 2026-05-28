import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner scanner = new Scanner(System.in);
 
        int n = scanner.nextInt();
        int k = scanner.nextInt();
 
        String str = scanner.next();
 
        int i = 0;
 
        while (i < n - 1) {
 
            boolean moved = false;
 
            for (int jump = k; jump >= 1; jump--) {
 
                if (i + jump < n && str.charAt(i + jump) == '.') {
                    i = i + jump;
                    moved = true;
                    break;
                }
            }
 
            if (!moved) {
                System.out.println("NO");
                return;
            }
        }
 
        System.out.println("YES");
    }
}
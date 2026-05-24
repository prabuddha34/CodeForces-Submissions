import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String moves = sc.next();
        
        int replacements = 0;
        for (int i = 0; i < n - 1; i++) {
            if ((moves.charAt(i) == 'U' && moves.charAt(i + 1) == 'R') ||
                (moves.charAt(i) == 'R' && moves.charAt(i + 1) == 'U')) {
                replacements++;
                i++; 
            }
        }
 
        int minimizedLength = n - replacements;
        System.out.println(minimizedLength);
        sc.close();
    }
}
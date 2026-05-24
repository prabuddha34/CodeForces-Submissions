import java.util.*;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
 
        // Check if input exceeds 100 characters
        if (input.length() > 100) {
            return;
        }
 
        // Find the last alphabetic character
        char ch = 0;
        for (int i = input.length() - 1; i >= 0; i--) {
            if (Character.isLetter(input.charAt(i))) {
                ch = input.charAt(i);
                break;
            }
        }
 
        // Check if it's a vowel (case insensitive)
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
 
        scanner.close();
    }
}
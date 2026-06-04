import java.util.Scanner;
 
public class Main {
 
    static boolean isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u';
    }
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
 
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
 
            // consonant other than 'n'
            if (!isVowel(ch) && ch != 'n') {
 
                // must have a next character and it must be a vowel
                if (i == s.length() - 1 || !isVowel(s.charAt(i + 1))) {
                    System.out.println("NO");
                    return;
                }
            }
        }
 
        System.out.println("YES");
    }
}
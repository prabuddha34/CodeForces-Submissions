import java.util.Scanner;
 
public class SayHello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine(); // input string Vasya typed
 
        String target = "hello";  // word we want to find
        int index = 0;            // pointer to track letters in "hello"
 
        // Loop through each character in Vasya's string
        for (int i = 0; i < s.length(); i++) {
            // If the current character matches the current target character
            if (index < target.length() && s.charAt(i) == target.charAt(index)) {
                index++; // move to the next character in "hello"
            }
        }
 
        // If we have matched all 5 characters, print YES
        if (index == target.length()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
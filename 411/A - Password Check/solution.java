import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String password = scanner.nextLine();
 
        if (password.length() < 5) {
            System.out.println("Too weak");
            return;
        }
 
        boolean hasUpper = false;
        boolean hasLower = false;
        boolean hasDigit = false;
 
        for (int i = 0; i < password.length(); i++) {
            char c = password.charAt(i);
            if (Character.isUpperCase(c)) hasUpper = true;
            else if (Character.isLowerCase(c)) hasLower = true;
            else if (Character.isDigit(c)) hasDigit = true;
        }
 
        if (hasUpper && hasLower && hasDigit) {
            System.out.println("Correct");
        } else {
            System.out.println("Too weak");
        }
    }
}
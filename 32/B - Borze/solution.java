 
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String code = sc.nextLine();
        String newStr = "";
 
        for (int i = 0; i < code.length(); ) {
            if (code.charAt(i) == '.') {
                newStr += '0';
                i++; // move one character forward
            } else if (i + 1 < code.length()) {
                String twoChar = code.substring(i, i + 2);
                if (twoChar.equals("-."))
                    newStr += '1';
                else if (twoChar.equals("--"))
                    newStr += '2';
                i += 2; // move two characters forward
            }
        }
 
        System.out.println(newStr);
        sc.close();
    }
}
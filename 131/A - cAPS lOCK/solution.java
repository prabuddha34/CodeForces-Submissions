import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
 
        boolean allUpper = true;
        boolean restUpper = true;
 
        // check if all letters are uppercase
        for (int i = 0; i < str.length(); i++) {
            if (Character.isLowerCase(str.charAt(i))) {
                allUpper = false;
                break;
            }
        }
 
        // check if all except first are uppercase
        for (int i = 1; i < str.length(); i++) {
            if (Character.isLowerCase(str.charAt(i))) {
                restUpper = false;
                break;
            }
        }
 
        if (allUpper || restUpper) {
            StringBuilder result = new StringBuilder();
 
            for (int i = 0; i < str.length(); i++) {
                char c = str.charAt(i);
 
                if (Character.isUpperCase(c))
                    result.append(Character.toLowerCase(c));
                else
                    result.append(Character.toUpperCase(c));
            }
 
            System.out.println(result.toString());
        } else {
            System.out.println(str);
        }
    }
}
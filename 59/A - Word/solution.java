import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        int totalUpper = 0;
        int totalLower = 0;
 
      
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (Character.isUpperCase(ch)) {
                totalUpper++;
            } else {
                totalLower++;
            }
        }
 
        String result;
        
        if (totalUpper > totalLower) {
            result = input.toUpperCase();
        } else {
            result = input.toLowerCase();
        }
 
        System.out.println(result);
        scanner.close();
    }
}
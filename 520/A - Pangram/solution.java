import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String str = scanner.next().toUpperCase(); // Convert input to uppercase
 
        int count = 0;
 
        // For every letter A to Z
        for (char ch = 'A'; ch <= 'Z'; ch++) {
            boolean found = false;
 
            // Check if that letter is present in the string
            for (int i = 0; i < n; i++) {
                if (str.charAt(i) == ch) {
                    found = true;
                    break; // no need to search further
                }
            }
 
            if (found) {
                count++; // this letter was found at least once
            }
        }
 
        if (count == 26) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
 
        scanner.close();
    }
}
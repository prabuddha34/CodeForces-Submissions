import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int n = scanner.nextInt();
        scanner.nextLine();  // consume leftover newline
        String s = scanner.nextLine();
 
        int snf = 0;  // Seattle to SF
        int sncc = 0; // SF to Seattle
 
        for (int i = 0; i < n - 1; i++) {
            if (s.charAt(i) == 'S' && s.charAt(i + 1) == 'F')
                snf++;
            if (s.charAt(i) == 'F' && s.charAt(i + 1) == 'S')
                sncc++;
        }
 
        if (snf > sncc)
            System.out.println("YES");
        else
            System.out.println("NO");
 
        scanner.close();
    }
}
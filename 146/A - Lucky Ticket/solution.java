import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int n = scanner.nextInt();
        String ticket = scanner.next();
 
        
        for (char c : ticket.toCharArray()) {
            if (c != '4' && c != '7') {
                System.out.println("NO");
                return;
            }
        }
 
        int half = n / 2;
        int sumFirstHalf = 0;
        int sumSecondHalf = 0;
 
        for (int i = 0; i < half; i++) {
            sumFirstHalf += ticket.charAt(i) - '0';
        }
 
        for (int i = half; i < n; i++) {
            sumSecondHalf += ticket.charAt(i) - '0';
        }
 
        if (sumFirstHalf == sumSecondHalf) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        scanner.close();
    }
    
}
 
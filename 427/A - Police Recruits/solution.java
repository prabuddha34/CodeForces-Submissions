import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int untreated = 0;
        int available = 0;
 
        for (int i = 0; i < n; i++) {
            int event = scanner.nextInt();
            
            if (event == -1) {
                if (available > 0) {
                    available--; 
                } else {
                    untreated++;  
                }
            } else {
                available += event; 
            }
        }
 
        System.out.println(untreated);
        scanner.close();
    }
}
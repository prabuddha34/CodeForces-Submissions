import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        int count;
        
        if (n % 2 == 0) {
            count = n / 2;
            System.out.println(count);
            for (int i = 0; i < count; i++) {
                System.out.print(2 + " ");
            }
        } else {
            count = n / 2;
            System.out.println(count);
            for (int i = 0; i < count - 1; i++) {
                System.out.print(2 + " ");
            }
            System.out.print(3); // last one is 3
        }
 
        scanner.close();
    }
}
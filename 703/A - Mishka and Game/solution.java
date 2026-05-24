import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int countMishka = 0;
        int countChris = 0;
 
        for (int i = 0; i < n; i++) {
            int mishka = scanner.nextInt();
            int chris = scanner.nextInt();
            if (mishka > chris) {
                countMishka++;
            } else if (chris > mishka) {
                countChris++;
            }
        }
 
        if (countMishka > countChris) {
            System.out.println("Mishka");
        } else if (countChris > countMishka) {
            System.out.println("Chris");
        } else {
            System.out.println("Friendship is magic!^^");
        }
 
        scanner.close();
    }
}
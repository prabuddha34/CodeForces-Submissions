import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int n  = scanner.nextInt();
        int k  = scanner.nextInt();
        int l  = scanner.nextInt();
        int c  = scanner.nextInt();
        int d  = scanner.nextInt();
        int p  = scanner.nextInt();
        int nl = scanner.nextInt();
        int np = scanner.nextInt();
 
        int totalDrink = k * l;
        int totalLimes = c * d;
        int totalSalt = p;
 
        int toastsByDrink = totalDrink / (nl * n);
        int toastsByLimes = totalLimes / n;
        int toastsBySalt = totalSalt / (np * n);
 
        int maxToasts = Math.min(toastsByDrink, Math.min(toastsByLimes, toastsBySalt));
 
        System.out.println(maxToasts);
        scanner.close();
    }
}
 
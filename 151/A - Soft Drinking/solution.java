import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
        int k = input.nextInt();
        int l = input.nextInt();
        int c = input.nextInt();
        int d = input.nextInt();
        int p = input.nextInt();
        int nl = input.nextInt();
        int np = input.nextInt();
 
        int totalDrink = k * l;
        int toastPossible = totalDrink / nl;
 
        int totalLime = c * d;
 
        int toastFromSalt = p / np;
 
        int min = Math.min(toastPossible,
                  Math.min(totalLime, toastFromSalt));
 
        System.out.println(min / n);
    }
}
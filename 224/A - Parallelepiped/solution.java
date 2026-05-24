import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(); // ab
        int y = sc.nextInt(); // bc
        int z = sc.nextInt(); // ca
 
        double a = Math.sqrt((double)(x * z) / y);
        double b = Math.sqrt((double)(x * y) / z);
        double c = Math.sqrt((double)(y * z) / x);
 
        int sum = (int)(4 * (a + b + c));
        System.out.println(sum);
    }
}
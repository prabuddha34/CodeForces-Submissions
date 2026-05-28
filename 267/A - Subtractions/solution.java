import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
 
        for (int i = 0; i < n; i++) {
 
            long a = sc.nextLong();
            long b = sc.nextLong();
 
            long ops = 0;
 
            while (a != 0 && b != 0) {
 
                if (a >= b) {
                    ops += a / b;
                    a = a % b;
                } else {
                    ops += b / a;
                    b = b % a;
                }
            }
 
            System.out.println(ops);
        }
    }
}
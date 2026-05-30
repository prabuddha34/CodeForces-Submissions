import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
 
        long sum = 0;
        long minOdd = Long.MAX_VALUE;
 
        for (int i = 0; i < n; i++) {
            long x = input.nextLong();
 
            sum += x;
 
            if (x % 2 == 1) {
                minOdd = Math.min(minOdd, x);
            }
        }
 
        if (sum % 2 == 0) {
            System.out.println(sum);
        } else {
            System.out.println(sum - minOdd);
        }
    }
}
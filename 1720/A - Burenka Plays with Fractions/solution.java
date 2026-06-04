import  java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- > 0) {
            long a = input.nextLong();
            long b = input.nextLong();
            long c = input.nextLong();
            long d = input.nextLong();
 
            long x = a * d;
            long y = b * c;
            if (x == y) {
                System.out.println(0);
            } else if (x == 0 || y == 0) {
                System.out.println(1);
            } else if (x % y == 0 || y % x == 0) {
                System.out.println(1);
            } else {
                System.out.println(2);
            }
 
        }
    }
}
import java.util.Scanner;
 
public class Main {
    
    static int gcd(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
 
        int maxNum = 0;
        int maxDen = 1;
 
        for (int a = 1; a < n; a++) {
            int b = n - a;
 
            if (a < b && gcd(a, b) == 1) {
       
                if ((long) a * maxDen > (long) maxNum * b) {
                    maxNum = a;
                    maxDen = b;
                }
            }
        }
 
        System.out.println(maxNum + " " + maxDen);
    }
}
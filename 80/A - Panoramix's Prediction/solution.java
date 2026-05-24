import java.util.*;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner=new  Scanner(System.in);
        int n=scanner.nextInt(); //First one is prime
        int m=scanner.nextInt(); //Second one is prime or not we have to check and it should the next prime after n
        if (isPrime(n)) {
            int nextPrime = n + 1;
            while (!isPrime(nextPrime)) {
                nextPrime++;
            }
            if (nextPrime == m) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } else {
            System.out.println("NO");
        }
    }
    public static boolean isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
}
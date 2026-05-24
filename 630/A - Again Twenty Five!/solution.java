 
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong(); 
 
        if (n == 0) {
            System.out.println("01");
        } else if (n == 1) {
            System.out.println("05");
        } else {
            System.out.println("25");
        }
    }
}
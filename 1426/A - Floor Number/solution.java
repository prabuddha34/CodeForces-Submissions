import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int t = sc.nextInt(); // number of test cases
 
        while (t != 0) {
            int n = sc.nextInt(); // apartment number
            int x = sc.nextInt(); // apartments per floor (starting from 2nd floor)
 
            if (n <= 2) {
                System.out.println(1); // 1st floor
            } else {
                int remaining = n - 2;
                int floorsAboveFirst = (remaining + x - 1) / x; // ceiling division without Math.ceil
                int resultFloor = 1 + floorsAboveFirst;
                System.out.println(resultFloor);
            }
 
            t--; // decrement manually
        }
 
        sc.close();
    }
}
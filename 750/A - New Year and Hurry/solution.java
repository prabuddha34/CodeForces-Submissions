import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt(); // number of problems
        int k = sc.nextInt(); // time needed to reach the party
 
        int timeLeft = 240 - k;
        int timeUsed = 0;
        int count = 0;
 
        for (int i = 1; i <= n; i++) {
            timeUsed += 5 * i;
            if (timeUsed <= timeLeft) {
                count++;
            } else {
                break;
            }
        }
 
        System.out.println(count);
        sc.close();
    }
}
import java.util.*;
 
public class Main {
    public static void main(String args[]) {
 
        Scanner sc = new Scanner(System.in);
 
        int t = sc.nextInt();
 
        int sum = 0;
 
        for (int i = 0; i < t; i++) {
            sum += sc.nextInt();
        }
 
        double percent = (double) sum / t;
 
        System.out.println(percent);
 
        sc.close();
    }
}
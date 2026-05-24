import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int[] t = new int[n];
        for (int i = 0; i < n; i++) {
            t[i] = sc.nextInt();
        }
 
        int lastInteresting = 0;
        for (int i = 0; i < n; i++) {
            int gap = t[i] - lastInteresting - 1;
            if (gap >= 15) {
                System.out.println(lastInteresting + 15);
                return;
            }
            lastInteresting = t[i];
        }
 
        
        if (90 - lastInteresting >= 15) {
            System.out.println(lastInteresting + 15);
        } else {
            System.out.println(90);
        }
 
        sc.close();
    }
}
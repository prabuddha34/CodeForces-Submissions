import java.util.*;
 
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt(); 
        int[] a = new int[n];
        List<Integer> stairways = new ArrayList<>();
 
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
 
        int count = 0; 
        for (int i = 0; i < n; i++) {
            count++;
          
            if (i == n - 1 || a[i + 1] == 1) {
                stairways.add(count);
                count = 0;
            }
        }
        System.out.println(stairways.size());
        for (int steps : stairways) {
            System.out.print(steps + " ");
        }
        sc.close();
    }
}
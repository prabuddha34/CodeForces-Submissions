import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
        int[] a = new int[n];
 
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }
 
        ArrayList<Integer> groups = new ArrayList<>();
 
        int count = 1;
 
        // Count consecutive same sushi types
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                count++;
            } else {
                groups.add(count);
                count = 1;
            }
        }
 
        groups.add(count);
 
        int maxLen = 0;
 
        // Find maximum valid segment
        for (int i = 0; i < groups.size() - 1; i++) {
            maxLen = Math.max(maxLen,
                    2 * Math.min(groups.get(i), groups.get(i + 1)));
        }
 
        System.out.println(maxLen);
    }
}
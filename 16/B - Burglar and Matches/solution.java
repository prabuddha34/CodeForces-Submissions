import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        long n = sc.nextLong(); // capacity of rucksack
        int m = sc.nextInt();   // number of containers
 
        long[][] arr = new long[m][2];
 
        // input
        for (int i = 0; i < m; i++) {
            arr[i][0] = sc.nextLong(); // ai (boxes)
            arr[i][1] = sc.nextLong(); // bi (matches per box)
        }
 
        // sort by bi descending
        Arrays.sort(arr, (a, b) -> Long.compare(b[1], a[1]));
 
        long total = 0;
 
        for (int i = 0; i < m && n > 0; i++) {
 
            long take = Math.min(n, arr[i][0]);
 
            total += take * arr[i][1];
 
            n -= take;
        }
 
        System.out.println(total);
    }
}
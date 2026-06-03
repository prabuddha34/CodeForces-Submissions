import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
        int[] a = new int[n];
 
        int sum = 0;
 
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
            sum += a[i];
        }
 
        Arrays.sort(a);
 
        int count = 0;
        int i = 0;
 
        while ((double) sum / n < 4.5) {
            sum += (5 - a[i]);
            count++;
            i++;
        }
 
        System.out.println(count);
    }
}
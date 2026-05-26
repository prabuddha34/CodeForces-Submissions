import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
 
        int[] a = new int[n];
 
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }
 
        int curr = 1;
        int max = 1;
 
        for (int i = 1; i < n; i++) {
 
            if (a[i] >= a[i - 1]) {
                curr++;
            } else {
                curr = 1;
            }
 
            if (curr > max) {
                max = curr;
            }
        }
 
        System.out.println(max);
    }
}
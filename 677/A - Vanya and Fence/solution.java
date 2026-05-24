import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int h = sc.nextInt();
 
        int a[] = new int[n];
 
        int width = 0;
 
        for (int i = 0; i < n; i++) {
 
            a[i] = sc.nextInt();
 
            if (a[i] <= h) {
                width += 1;
            }
            else {
                width += 2;
            }
        }
 
        System.out.println(width);
    }
}
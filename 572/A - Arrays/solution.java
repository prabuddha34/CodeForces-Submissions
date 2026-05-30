import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int na = input.nextInt();
        int nb = input.nextInt();
        int k = input.nextInt();
        int m = input.nextInt();
 
        int[] a = new int[na];
        int[] b = new int[nb];
 
        for (int i = 0; i < na; i++) {
            a[i] = input.nextInt();
        }
 
        for (int i = 0; i < nb; i++) {
            b[i] = input.nextInt();
        }
 
        if (a[k - 1] < b[nb - m]) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
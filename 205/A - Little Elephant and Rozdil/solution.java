import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
        int a[] = new int[n];
 
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }
 
        int minimum = a[0];
        int pos = 0;
        int count = 1;
 
        for (int i = 1; i < n; i++) {
 
            if (a[i] < minimum) {
                minimum = a[i];
                pos = i;
                count = 1;
            }
            else if (a[i] == minimum) {
                count++;
            }
        }
 
        if (count > 1) {
            System.out.println("Still Rozdil");
        } else {
            System.out.println(pos + 1);
        }
    }
}
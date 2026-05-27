import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
 
        int[] a = new int[n];
 
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }
 
        int left = 0;
        int right = n - 1;
 
        int sereja = 0;
        int dima = 0;
 
        boolean serejaTurn = true;
 
        while (left <= right) {
 
            int chosen;
 
            if (a[left] > a[right]) {
                chosen = a[left];
                left++;
            } else {
                chosen = a[right];
                right--;
            }
 
            if (serejaTurn) {
                sereja += chosen;
            } else {
                dima += chosen;
            }
 
            serejaTurn = !serejaTurn;
        }
 
        System.out.println(sereja + " " + dima);
    }
}
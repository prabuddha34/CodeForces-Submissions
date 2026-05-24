 
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine(); // consume the leftover newline
 
        String[] arr = new String[n];
 
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextLine();
        }
 
        int maxCount = 0;
        String winner = "";
 
        for (int i = 0; i < arr.length; i++) {
            int count = 0;
 
            for (int j = 0; j < arr.length; j++) {
                if (arr[i].equals(arr[j])) {
                    count++;
                }
            }
 
            if (count > maxCount) {
                maxCount = count;
                winner = arr[i];
            }
        }
 
        System.out.println(winner);
    }
}
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt(); //Money
 
 
        int[] arr = {100, 20, 10, 5, 1};
 
        int count = 0;
 
        for (int i = 0; i < arr.length; i++) {
 
            count += n / arr[i];
 
            n = n % arr[i];
        }
        System.out.println(count);
    }
}
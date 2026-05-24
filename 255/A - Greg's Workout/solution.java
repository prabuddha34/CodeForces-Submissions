import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        
        for(int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
 
        int chest = 0, biceps = 0, back = 0;
 
        for(int i = 0; i < n; i++) {
            if(i % 3 == 0) {
                chest += arr[i];
            } else if(i % 3 == 1) {
                biceps += arr[i];
            } else {
                back += arr[i];
            }
        }
 
        if(chest >= biceps && chest >= back) {
            System.out.println("chest");
        } else if(biceps >= chest && biceps >= back) {
            System.out.println("biceps");
        } else {
            System.out.println("back");
        }
    }
}
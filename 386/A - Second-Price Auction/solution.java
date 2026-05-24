import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        int  arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = scanner.nextInt();
        }
        int maxPrice = -1, secondMax = -1;
        int winnerIndex = -1;
 
        for(int i=0;i<n;i++){
            if(arr[i] > maxPrice) {
                secondMax = maxPrice;
                maxPrice = arr[i];
                winnerIndex = i;
            } else if (arr[i] > secondMax) {
                secondMax = arr[i];
            }
        }
        System.out.println((winnerIndex + 1) + " " + secondMax);
        scanner.close();
    }
}
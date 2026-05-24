import java.util.*;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int arr[]=new int[n];
        int temp[]=new int[n];
        int count=0;
          for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
          for (int i = n - 1; i >= 0; i--) {
            boolean isDuplicate = false;
           
            for (int j = 0; j < count; j++) {
                if (temp[j] == arr[i]) {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate) {
                temp[count++] = arr[i]; 
            }
        }
            System.out.println(count);
        for (int i = count - 1; i >= 0; i--) {
            System.out.print(temp[i] + " ");
        }
        scanner.close();
    }
}
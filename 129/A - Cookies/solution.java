import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a[]=new int[n];
        int sum=0;
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
            sum+=a[i];
        }
        int count=0;
        for (int i = 0; i < n; i++) {
            if(sum%2 == a[i]%2 ){
                count++;
            }
        }
        System.out.println(count);
 
    }
}
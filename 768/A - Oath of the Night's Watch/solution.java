import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a[]=new int[n];
        int min=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
            min=Math.min(min,a[i]);
            max=Math.max(max,a[i]);
        }
        int count=0;
        for (int x:a) {
            if(x>min && x<max){
                count++;
            }
        }
        System.out.println(count);
 
    }
}
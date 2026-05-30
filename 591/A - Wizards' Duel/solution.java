import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int l = input.nextInt();
        int p = input.nextInt();
        int q = input.nextInt();
 
        double ans = (double) p * l / (p + q);
 
        System.out.println(ans);
    }
}
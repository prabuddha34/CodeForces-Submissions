import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int c = input.nextInt();
        int v0 = input.nextInt();
        int v1 = input.nextInt();
        int a = input.nextInt();
        int l = input.nextInt();
 
        int days = 1;
        int read = v0;
        int speed = v0;
 
        while (read < c) {
            speed = Math.min(speed + a, v1);
            read += speed - l;
            days++;
        }
 
        System.out.println(days);
    }
}
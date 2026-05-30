import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
        int b = input.nextInt();
        int d = input.nextInt();
 
        int waste = 0;
        int time = 0;
 
        for (int i = 0; i < n; i++) {
            int orange = input.nextInt();
 
            if (orange <= b) {
                waste += orange;
 
                if (waste > d) {
                    time++;
                    waste = 0;
                }
            }
        }
 
        System.out.println(time);
    }
}
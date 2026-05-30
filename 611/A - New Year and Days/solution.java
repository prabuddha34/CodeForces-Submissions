import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int x = input.nextInt();
        input.next(); // "of"
        String type = input.next(); // "week" or "month"
 
        if (type.equals("week")) {
            if (x == 5 || x == 6) {
                System.out.println(53);
            } else {
                System.out.println(52);
            }
        } else {
            if (x <= 29) {
                System.out.println(12);
            } else if (x == 30) {
                System.out.println(11);
            } else {
                System.out.println(7);
            }
        }
    }
}
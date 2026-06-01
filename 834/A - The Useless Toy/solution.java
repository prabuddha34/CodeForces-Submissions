import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        char start = sc.next().charAt(0);
        char end = sc.next().charAt(0);
        long n = sc.nextLong();
 
        n %= 4;
 
        String pos = "^>v<";
 
        int s = pos.indexOf(start);
        int e = pos.indexOf(end);
 
        boolean cw = (s + n) % 4 == e;
        boolean ccw = (s - n + 400) % 4 == e;
 
        if (cw && ccw) {
            System.out.println("undefined");
        } else if (cw) {
            System.out.println("cw");
        } else {
            System.out.println("ccw");
        }
    }
}
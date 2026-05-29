import  java.io.*;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s=input.nextLine();
        String t=input.nextLine();
 
        int sh = Integer.parseInt(s.substring(0, 2));
        int sm = Integer.parseInt(s.substring(3, 5));
 
        // Sleep duration
        int th = Integer.parseInt(t.substring(0, 2));
        int tm = Integer.parseInt(t.substring(3, 5));
        int current = sh * 60 + sm;
        int sleep = th * 60 + tm;
        int bed = current - sleep;
        if (bed < 0) {
            bed += 24 * 60;
        }
        int hh = bed / 60;
        int mm = bed % 60;
        System.out.printf("%02d:%02d
", hh, mm);
 
    }
}
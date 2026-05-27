import java.util.*;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
 
        int trips = 0;
        char type = ' ';
        int count = 0;
 
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
 
            if (count == 0) {
                type = c;
                count = 1;
            } 
            else if (c == type && count < 5) {
                count++;
            } 
            else {
                trips++;     // go to closet
                type = c;    // start new batch
                count = 1;
            }
        }
 
        // last trip
        if (s.length() > 0) trips++;
 
        System.out.println(trips);
    }
}
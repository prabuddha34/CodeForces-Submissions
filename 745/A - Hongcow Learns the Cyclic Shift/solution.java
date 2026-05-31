import java.util.HashSet;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
 
        HashSet<String> set = new HashSet<>();
 
        String current = s;
        for (int i = 0; i < s.length(); i++) {
            set.add(current);
 
            // Move last character to the beginning
            current = current.charAt(current.length() - 1)
                    + current.substring(0, current.length() - 1);
        }
 
        System.out.println(set.size());
    }
}
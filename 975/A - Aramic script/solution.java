import java.util.HashSet;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
        HashSet<String> set = new HashSet<>();
 
        for (int i = 0; i < n; i++) {
            String s = input.next();
 
            boolean[] seen = new boolean[26];
 
            for (int j = 0; j < s.length(); j++) {
                seen[s.charAt(j) - 'a'] = true;
            }
 
            StringBuilder root = new StringBuilder();
 
            for (int j = 0; j < 26; j++) {
                if (seen[j]) {
                    root.append((char) ('a' + j));
                }
            }
 
            set.add(root.toString());
        }
 
        System.out.println(set.size());
    }
}
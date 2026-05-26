import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        String guest = sc.nextLine().trim();
        String host = sc.nextLine().trim();
        String pile = sc.nextLine().trim();
 
        int[] freq = new int[26];
 
        // Add guest + host letters
        for (char c : (guest + host).toCharArray()) {
            freq[c - 'A']++;
        }
 
        // Remove pile letters
        for (char c : pile.toCharArray()) {
            freq[c - 'A']--;
        }
 
        // Check if all are zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                System.out.println("NO");
                return;
            }
        }
 
        System.out.println("YES");
    }
}
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s= input.next();
        String t = input.next();
        int i = s.length() - 1;
        int j = t.length() - 1;
 
        int common = 0;
 
        while (i >= 0 && j >= 0 && s.charAt(i) == t.charAt(j)) {
            common++;
            i--;
            j--;
        }
        int ans=s.length() + t.length() - 2 * common;
        System.out.println(ans);
    }
}
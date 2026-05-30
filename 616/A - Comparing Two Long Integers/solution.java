import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class Main {
 
    private static String normalize(String s) {
        int i = 0;
        while (i < s.length() - 1 && s.charAt(i) == '0') {
            i++;
        }
        return s.substring(i);
    }
 
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
 
        String a = normalize(br.readLine());
        String b = normalize(br.readLine());
 
        if (a.length() > b.length()) {
            System.out.println(">");
        } else if (a.length() < b.length()) {
            System.out.println("<");
        } else {
            int cmp = a.compareTo(b);
 
            if (cmp > 0) {
                System.out.println(">");
            } else if (cmp < 0) {
                System.out.println("<");
            } else {
                System.out.println("=");
            }
        }
    }
}
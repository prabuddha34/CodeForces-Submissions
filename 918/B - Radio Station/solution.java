import java.util.HashMap;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
        int m = input.nextInt();
 
        HashMap<String, String> map = new HashMap<>();
 
        for (int i = 0; i < n; i++) {
            String name = input.next();
            String ip = input.next();
 
            map.put(ip, name);
        }
 
        for (int i = 0; i < m; i++) {
            String command = input.next();
            String ipWithSemicolon = input.next();
 
            String ip = ipWithSemicolon.substring(0,
                    ipWithSemicolon.length() - 1);
 
            System.out.println(command + " " + ipWithSemicolon +
                    " #" + map.get(ip));
        }
    }
}
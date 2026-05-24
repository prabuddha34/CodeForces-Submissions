import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
 
        boolean[] isFibo = new boolean[n + 2];
        int a = 1, b = 1;
 
        
        while (a <= n) {
            isFibo[a] = true;
            int temp = a + b;
            a = b;
            b = temp;
        }
 
        
        StringBuilder name = new StringBuilder();
        for (int i = 1; i <= n; i++) {
            name.append(isFibo[i] ? 'O' : 'o');
        }
 
        System.out.println(name.toString());
        sc.close();
    }
}
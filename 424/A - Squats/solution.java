import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        String s = sc.next();
 
        char[] arr = s.toCharArray();
 
        int target = n / 2;
 
        int xCount = 0, XCount = 0;
 
        for (char c : arr) {
            if (c == 'x') xCount++;
            else XCount++;
        }
 
        int minutes = 0;
 
        // Fix excess X or x
        if (XCount > target) {
            int needToChange = XCount - target;
 
            for (int i = 0; i < n && needToChange > 0; i++) {
                if (arr[i] == 'X') {
                    arr[i] = 'x';
                    needToChange--;
                    minutes++;
                }
            }
        } else if (xCount > target) {
            int needToChange = xCount - target;
 
            for (int i = 0; i < n && needToChange > 0; i++) {
                if (arr[i] == 'x') {
                    arr[i] = 'X';
                    needToChange--;
                    minutes++;
                }
            }
        }
 
        System.out.println(minutes);
        System.out.println(new String(arr));
    }
}
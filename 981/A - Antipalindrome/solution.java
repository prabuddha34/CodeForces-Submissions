import java.util.Scanner;
 
public class Main {
 
    public static boolean isPalindrome(String str) {
        int l = 0;
        int r = str.length() - 1;
 
        while (l < r) {
            if (str.charAt(l) != str.charAt(r)) {
                return false;
            }
            l++;
            r--;
        }
 
        return true;
    }
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
 
        String str = input.nextLine();
 
        if (!isPalindrome(str)) {
            System.out.println(str.length());
            return;
        }
 
        boolean allSame = true;
 
        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) != str.charAt(0)) {
                allSame = false;
                break;
            }
        }
 
        if (allSame) {
            System.out.println(0);
        } else {
            System.out.println(str.length() - 1);
        }
    }
}
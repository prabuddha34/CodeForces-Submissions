import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
 
        int pivotIndex = 0;
 
        // Find pivot position
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '^') {
                pivotIndex = i;
                break;
            }
        }
 
        long left = 0;
        long right = 0;
 
        // Calculate torques
        for (int i = 0; i < s.length(); i++) {
 
            char ch = s.charAt(i);
 
            if (ch >= '1' && ch <= '9') {
 
                int weight = ch - '0';
                int distance = Math.abs(i - pivotIndex);
 
                if (i < pivotIndex) {
                    left += (long) weight * distance;
                } else if (i > pivotIndex) {
                    right += (long) weight * distance;
                }
            }
        }
 
        // Compare torques
        if (left > right) {
            System.out.println("left");
        } else if (right > left) {
            System.out.println("right");
        } else {
            System.out.println("balance");
        }
    }
}
import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n = sc.nextInt();
        int[][] points = new int[n][2];
 
        for (int i = 0; i < n; i++) {
            points[i][0] = sc.nextInt(); // x
            points[i][1] = sc.nextInt(); // y
        }
 
        int supercentralCount = 0;
 
        for (int i = 0; i < n; i++) {
            int x = points[i][0];
            int y = points[i][1];
 
            boolean left = false, right = false, up = false, down = false;
 
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                int xj = points[j][0];
                int yj = points[j][1];
 
                if (xj == x && yj > y) up = true;
                if (xj == x && yj < y) down = true;
                if (yj == y && xj > x) right = true;
                if (yj == y && xj < x) left = true;
            }
 
            if (left && right && up && down) {
                supercentralCount++;
            }
        }
 
        System.out.println(supercentralCount);
    }
}
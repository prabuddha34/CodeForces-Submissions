import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); 
 
        int[][] a = new int[n][n];
 
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }
 
        boolean goodLab = true;
 
 
        for (int i = 0; i < n && goodLab; i++) {
            for (int j = 0; j < n && goodLab; j++) {
        
                if (a[i][j] == 1) continue;
 
                boolean canBeSplit = false;
 
                
                for (int r = 0; r < n; r++) {
                    for (int c = 0; c < n; c++) {
                        if (a[i][r] + a[c][j] == a[i][j]) {
                            canBeSplit = true;
                            break;
                        }
                    }
                    if (canBeSplit) break;
                }
 
                // If we didn't find such a pair, it's a bad lab
                if (!canBeSplit) {
                    goodLab = false;
                    break;
                }
            }
        }
 
        System.out.println(goodLab ? "YES" : "NO");
 
        sc.close();
    }
}
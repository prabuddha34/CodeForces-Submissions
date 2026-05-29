import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        char[][] arr = new char[8][8];
 
        // Read board
        for (int i = 0; i < 8; i++) {
            String s = input.next();
 
            for (int j = 0; j < 8; j++) {
                arr[i][j] = s.charAt(j);
            }
        }
 
        int white = 0;
        int black = 0;
 
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
 
                char ch = arr[i][j];
 
                // White pieces
                if (ch == 'Q') white += 9;
                else if (ch == 'R') white += 5;
                else if (ch == 'B' || ch == 'N') white += 3;
                else if (ch == 'P') white += 1;
 
                // Black pieces
                else if (ch == 'q') black += 9;
                else if (ch == 'r') black += 5;
                else if (ch == 'b' || ch == 'n') black += 3;
                else if (ch == 'p') black += 1;
            }
        }
 
        if (white > black) {
            System.out.println("White");
        } else if (black > white) {
            System.out.println("Black");
        } else {
            System.out.println("Draw");
        }
    }
}
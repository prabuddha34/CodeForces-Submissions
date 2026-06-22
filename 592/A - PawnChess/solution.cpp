#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<string> board(8);
 
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
 
    int white = 100;
    int black = 100;
 
    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
 
            if (board[r][c] == 'W') {
                bool clear = true;
 
                for (int x = r - 1; x >= 0; x--) {
                    if (board[x][c] != '.') {
                        clear = false;
                    }
                }
 
                if (clear) {
                    white = min(white, r);
                }
            }
 
            if (board[r][c] == 'B') {
                bool clear = true;
 
                for (int x = r + 1; x < 8; x++) {
                    if (board[x][c] != '.') {
                        clear = false;
                    }
                }
 
                if (clear) {
                    black = min(black, 7 - r);
                }
            }
        }
    }
 
    if (white <= black) {
        cout << "A
";
    } else {
        cout << "B
";
    }
 
    return 0;
}
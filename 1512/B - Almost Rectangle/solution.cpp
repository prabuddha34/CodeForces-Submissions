#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<string> grid(n);
 
        int r1 = -1, c1 = -1;
        int r2 = -1, c2 = -1;
 
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
 
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '*') {
                    if (r1 == -1) {
                        r1 = i;
                        c1 = j;
                    } else {
                        r2 = i;
                        c2 = j;
                    }
                }
            }
        }
 
        if (r1 == r2) {
 
            int r = (r1 + 1) % n;
 
            grid[r][c1] = '*';
            grid[r][c2] = '*';
        }
        else if (c1 == c2) {
          
            int c = (c1 + 1) % n;
 
            grid[r1][c] = '*';
            grid[r2][c] = '*';
        }
        else {
          
            grid[r1][c2] = '*';
            grid[r2][c1] = '*';
        }
 
        for (int i = 0; i < n; i++) {
            cout << grid[i] << endl;
        }
    }
 
    return 0;
}
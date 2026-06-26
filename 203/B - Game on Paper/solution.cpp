#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> black(n + 1, vector<int>(n + 1, 0));
 
    for (int move = 1; move <= m; move++) {
        int x, y;
        cin >> x >> y;
 
        black[x][y] = 1;
 
        for (int r = x - 2; r <= x; r++) {
            for (int c = y - 2; c <= y; c++) {
 
                if (r < 1 || c < 1 || r + 2 > n || c + 2 > n) continue;
 
                int cnt = 0;
 
                for (int i = r; i <= r + 2; i++) {
                    for (int j = c; j <= c + 2; j++) {
                        cnt += black[i][j];
                    }
                }
 
                if (cnt == 9) {
                    cout << move;
                    return 0;
                }
            }
        }
    }
 
    cout << -1;
    return 0;
}
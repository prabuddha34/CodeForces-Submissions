#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int r, c, n, k;
    cin >> r >> c >> n >> k;
 
    int grid[11][11] = {0};
 
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        grid[x][y] = 1;
    }
 
    int ans = 0;
 
    for (int r1 = 1; r1 <= r; r1++) {
        for (int c1 = 1; c1 <= c; c1++) {
            for (int r2 = r1; r2 <= r; r2++) {
                for (int c2 = c1; c2 <= c; c2++) {
 
                    int count = 0;
 
                    for (int i = r1; i <= r2; i++) {
                        for (int j = c1; j <= c2; j++) {
                            if (grid[i][j] == 1) {
                                count++;
                            }
                        }
                    }
 
                    if (count >= k) {
                        ans++;
                    }
                }
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
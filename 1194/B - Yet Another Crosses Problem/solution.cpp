#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    cin >> q;
 
    while (q--) {
        int n, m;
        cin >> n >> m;
 
        vector<string> grid(n);
        vector<int> rowWhite(n, 0), colWhite(m, 0);
 
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
 
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '.') {
                    rowWhite[i]++;
                    colWhite[j]++;
                }
            }
        }
 
        int ans = n + m;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int cost = rowWhite[i] + colWhite[j];
 
                if (grid[i][j] == '.') {
                    cost--;
                }
 
                ans = min(ans, cost);
            }
        }
 
        cout << ans << "
";
    }
 
    return 0;
}
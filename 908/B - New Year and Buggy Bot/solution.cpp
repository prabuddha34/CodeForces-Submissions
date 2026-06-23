#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<string> grid(n);
 
    int sx, sy;
 
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
 
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'S') {
                sx = i;
                sy = j;
            }
        }
    }
 
    string s;
    cin >> s;
 
    vector<int> dir = {0, 1, 2, 3};
 
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};
 
    int ans = 0;
 
    do {
        int x = sx, y = sy;
        bool ok = false;
 
        for (char c : s) {
            int d = dir[c - '0'];
 
            x += dx[d];
            y += dy[d];
 
            if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == '#') {
                break;
            }
 
            if (grid[x][y] == 'E') {
                ok = true;
                break;
            }
        }
 
        if (ok) ans++;
 
    } while (next_permutation(dir.begin(), dir.end()));
 
    cout << ans << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    set<pair<int,int>> visited;
 
    int x = 0, y = 0;
    visited.insert({x, y});
 
    for (char c : s) {
        int px = x, py = y;
 
        if (c == 'L') x--;
        if (c == 'R') x++;
        if (c == 'U') y++;
        if (c == 'D') y--;
 
        if (visited.count({x, y})) {
            cout << "BUG
";
            return 0;
        }
 
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};
 
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
 
            if (nx == px && ny == py) continue;
 
            if (visited.count({nx, ny})) {
                cout << "BUG
";
                return 0;
            }
        }
 
        visited.insert({x, y});
    }
 
    cout << "OK
";
    return 0;
}
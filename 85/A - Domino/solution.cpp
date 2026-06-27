#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> mask(n + 1, 0);
 
    if (n == 2) {
        mask[1] = 15; // all 4 rows cross the middle cut
    } else if (n >= 3) {
        for (int i = 1; i < n; i++) {
            if (i % 2 == 1) mask[i] = 3;   // rows 0,1
            else mask[i] = 12;             // rows 2,3
        }
    }
 
    vector<vector<int>> id(4, vector<int>(n, -1));
    int dom = 0;
 
    for (int c = 0; c < n; c++) {
        // horizontal dominoes crossing cut c -> c+1
        if (c + 1 < n) {
            for (int r = 0; r < 4; r++) {
                if (mask[c + 1] & (1 << r)) {
                    id[r][c] = id[r][c + 1] = dom++;
                }
            }
        }
 
        // vertical dominoes inside current column
        for (int r = 0; r < 4; r++) {
            if (id[r][c] == -1) {
                id[r][c] = id[r + 1][c] = dom++;
                r++;
            }
        }
    }
 
    vector<set<int>> adj(dom);
 
    int dr[] = {1, 0};
    int dc[] = {0, 1};
 
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < n; c++) {
            for (int k = 0; k < 2; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];
 
                if (nr < 4 && nc < n && id[r][c] != id[nr][nc]) {
                    adj[id[r][c]].insert(id[nr][nc]);
                    adj[id[nr][nc]].insert(id[r][c]);
                }
            }
        }
    }
 
    vector<char> color(dom, '?');
 
    for (int i = 0; i < dom; i++) {
        vector<bool> used(26, false);
 
        for (int x : adj[i]) {
            if (color[x] != '?') {
                used[color[x] - 'a'] = true;
            }
        }
 
        for (int j = 0; j < 26; j++) {
            if (!used[j]) {
                color[i] = char('a' + j);
                break;
            }
        }
    }
 
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < n; c++) {
            cout << color[id[r][c]];
        }
        cout << '
';
    }
 
    return 0;
}
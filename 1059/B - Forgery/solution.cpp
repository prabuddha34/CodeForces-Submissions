#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<string> g(n);
    for (int i = 0; i < n; i++) cin >> g[i];
 
    vector<string> drawn(n, string(m, '.'));
 
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            bool ok = true;
 
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    if (dx == 0 && dy == 0) continue;
 
                    if (g[i + dx][j + dy] != '#') {
                        ok = false;
                    }
                }
            }
 
            if (ok) {
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        if (dx == 0 && dy == 0) continue;
 
                        drawn[i + dx][j + dy] = '#';
                    }
                }
            }
        }
    }
 
    if (drawn == g) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
 
    return 0;
}
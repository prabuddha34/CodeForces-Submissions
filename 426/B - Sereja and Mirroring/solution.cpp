#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> a(n, vector<int>(m));
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
 
    int rows = n;
 
    while (rows % 2 == 0) {
        bool ok = true;
 
        for (int i = 0; i < rows / 2; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != a[rows - 1 - i][j]) {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
        }
 
        if (ok) {
            rows /= 2;
        } else {
            break;
        }
    }
 
    cout << rows << '
';
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<vector<int>> card(n);
    vector<vector<bool>> has(n, vector<bool>(101, false));
 
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        card[i].resize(m);
 
        for (int j = 0; j < m; j++) {
            cin >> card[i][j];
            has[i][card[i][j]] = true;
        }
    }
 
    for (int i = 0; i < n; i++) {
        bool canWin = true;
 
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
 
            bool subset = true;
 
            for (int x : card[j]) {
                if (!has[i][x]) {
                    subset = false;
                    break;
                }
            }
 
            if (subset) {
                canWin = false;
                break;
            }
        }
 
        cout << (canWin ? "YES" : "NO") << '
';
    }
 
    return 0;
}
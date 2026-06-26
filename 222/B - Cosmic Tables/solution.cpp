#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
 
    vector<int> row(n + 1), col(m + 1);
 
    for (int i = 1; i <= n; i++) row[i] = i;
    for (int j = 1; j <= m; j++) col[j] = j;
 
    while (k--) {
        char ch;
        int x, y;
        cin >> ch >> x >> y;
 
        if (ch == 'r') {
            swap(row[x], row[y]);
        } 
        else if (ch == 'c') {
            swap(col[x], col[y]);
        } 
        else {
            cout << a[row[x]][col[y]] << '
';
        }
    }
 
    return 0;
}
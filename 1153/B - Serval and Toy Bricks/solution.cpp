#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, h;
    cin >> n >> m >> h;
 
    vector<int> a(m), b(n);
 
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    vector<vector<int>> top(n, vector<int>(m));
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> top[i][j];
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (top[i][j] == 0) {
                cout << 0 << " ";
            } else {
                cout << min(b[i], a[j]) << " ";
            }
        }
        cout << '
';
    }
 
    return 0;
}
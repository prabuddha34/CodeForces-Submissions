#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m, n;
    cin >> m >> n;
 
    vector<vector<int>> b(m, vector<int>(n));
    vector<vector<int>> a(m, vector<int>(n, 1));
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i][j] == 0) {
                for (int col = 0; col < n; col++) {
                    a[i][col] = 0;
                }
 
                for (int row = 0; row < m; row++) {
                    a[row][j] = 0;
                }
            }
        }
    }
 
    vector<vector<int>> check(m, vector<int>(n, 0));
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int val = 0;
 
            for (int col = 0; col < n; col++) {
                val |= a[i][col];
            }
 
            for (int row = 0; row < m; row++) {
                val |= a[row][j];
            }
 
            check[i][j] = val;
        }
    }
 
    if (check != b) {
        cout << "NO
";
    } else {
        cout << "YES
";
 
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << '
';
        }
    }
 
    return 0;
}
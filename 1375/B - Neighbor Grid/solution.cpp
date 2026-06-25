#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<vector<int>> a(n, vector<int>(m));
        bool ok = true;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
 
                int cnt = 4;
 
                if (i == 0) cnt--;
                if (i == n - 1) cnt--;
                if (j == 0) cnt--;
                if (j == m - 1) cnt--;
 
                if (a[i][j] > cnt) {
                    ok = false;
                }
 
                a[i][j] = cnt;
            }
        }
 
        if (!ok) {
            cout << "NO
";
        } else {
            cout << "YES
";
 
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
 
    return 0;
}
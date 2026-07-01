#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<vector<long long>> a(n, vector<long long>(m));
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
 
        long long ans = 0;
 
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < m / 2; j++) {
                vector<long long> v = {
                    a[i][j],
                    a[i][m - 1 - j],
                    a[n - 1 - i][j],
                    a[n - 1 - i][m - 1 - j]
                };
 
                sort(v.begin(), v.end());
 
                ans += (v[3] - v[0]) + (v[2] - v[1]);
            }
        }
 
        if (n % 2 == 1) {
            int row = n / 2;
 
            for (int j = 0; j < m / 2; j++) {
                ans += abs(a[row][j] - a[row][m - 1 - j]);
            }
        }
 
        if (m % 2 == 1) {
            int col = m / 2;
 
            for (int i = 0; i < n / 2; i++) {
                ans += abs(a[i][col] - a[n - 1 - i][col]);
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
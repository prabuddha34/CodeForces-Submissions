#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        if (k < n || k > 2 * n - 1) {
            cout << -1 << '
';
            continue;
        }
 
        vector<vector<int>> a(n, vector<int>(n));
        vector<bool> used(n * n + 1);
 
        int d = 2 * n - k;
 
        for (int i = 0; i < d; i++) {
            a[i][i] = i + 1;
            used[i + 1] = true;
        }
 
        int x = d + 1;
 
        for (int i = d; i < n; i++) {
            a[i][0] = x;
            used[x] = true;
            x++;
        }
 
        x = n + 1;
 
        for (int j = d; j < n; j++) {
            a[0][j] = x;
            used[x] = true;
            x++;
        }
 
        x = 1;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 0) {
                    while (used[x]) x++;
                    a[i][j] = x;
                    used[x] = true;
                }
            }
        }
 
        for (auto &r : a) {
            for (int x : r)
                cout << x << ' ';
            cout << '
';
        }
    }
}
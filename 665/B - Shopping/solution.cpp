#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<int> p(k);
 
    for (int i = 0; i < k; i++) {
        cin >> p[i];
        p[i]--;
    }
 
    vector<vector<int>> a(n, vector<int>(m));
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }
 
    long long ans = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
 
            int pos = 0;
 
            while (p[pos] != a[i][j]) {
                pos++;
            }
 
            ans += pos + 1;
 
            int value = p[pos];
 
            for (int l = pos; l >= 1; l--) {
                p[l] = p[l - 1];
            }
 
            p[0] = value;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
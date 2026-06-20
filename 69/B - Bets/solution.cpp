#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> l(m + 1), r(m + 1), t(m + 1), c(m + 1);
 
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> t[i] >> c[i];
    }
 
    int ans = 0;
 
    for (int section = 1; section <= n; section++) {
        int winner = -1;
 
        for (int i = 1; i <= m; i++) {
            if (l[i] <= section && section <= r[i]) {
                if (winner == -1) {
                    winner = i;
                } 
                else if (t[i] < t[winner]) {
                    winner = i;
                }
            }
        }
 
        if (winner != -1) {
            ans += c[winner];
        }
    }
 
    cout << ans;
 
    return 0;
}
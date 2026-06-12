#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a;
    cin >> n >> a;
 
    vector<int> t(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> t[i];
    }
 
    int ans = t[a];
 
    for (int d = 1; d <= n; d++) {
        int l = a - d;
        int r = a + d;
 
        if (l >= 1 && r <= n) {
            if (t[l] && t[r]) {
                ans += 2;
            }
        } else if (l >= 1) {
            ans += t[l];
        } else if (r <= n) {
            ans += t[r];
        }
    }
 
    cout << ans << '
';
    return 0;
}
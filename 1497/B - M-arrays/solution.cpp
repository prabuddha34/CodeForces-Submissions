#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<int> cnt(m, 0);
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            cnt[x % m]++;
        }
 
        int ans = 0;
 
        if (cnt[0] > 0) ans++;
 
        for (int i = 1; i <= (m - 1) / 2; i++) {
            int a = cnt[i];
            int b = cnt[m - i];
 
            if (a == 0 && b == 0) continue;
 
            ans += max(1, abs(a - b));
        }
 
        if (m % 2 == 0 && cnt[m / 2] > 0) {
            ans++;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        unordered_map<int, int> freq;
        int mx = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mx = max(mx, ++freq[x]);
        }
 
        int cnt = mx;
        long long ans = 0;
 
        while (cnt < n) {
            int add = min(cnt, n - cnt);
 
            ans++;      // clone
            ans += add; // swaps
 
            cnt += add;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
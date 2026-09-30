#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n), b(n);
 
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
 
        long long dp0 = 0, dp1 = 0;
 
        for (int i = 1; i < n; i++) {
            long long x = min(
                dp0 + abs(a[i] - a[i-1]) + abs(b[i] - b[i-1]),
                dp1 + abs(a[i] - b[i-1]) + abs(b[i] - a[i-1])
            );
 
            long long y = min(
                dp0 + abs(b[i] - a[i-1]) + abs(a[i] - b[i-1]),
                dp1 + abs(b[i] - b[i-1]) + abs(a[i] - a[i-1])
            );
 
            dp0 = x;
            dp1 = y;
        }
 
        cout << min(dp0, dp1) << '
';
    }
}
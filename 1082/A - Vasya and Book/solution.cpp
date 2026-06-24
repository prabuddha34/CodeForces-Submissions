#include <bits/stdc++.h>
using namespace std;
 
long long ceilDiv(long long a, long long b) {
    return (a + b - 1) / b;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, x, y, d;
        cin >> n >> x >> y >> d;
 
        long long ans = LLONG_MAX;
 
        // direct x -> y
        if (abs(x - y) % d == 0) {
            ans = min(ans, abs(x - y) / d);
        }
 
        // x -> 1 -> y
        if ((y - 1) % d == 0) {
            ans = min(ans, ceilDiv(x - 1, d) + (y - 1) / d);
        }
 
        // x -> n -> y
        if ((n - y) % d == 0) {
            ans = min(ans, ceilDiv(n - x, d) + (n - y) / d);
        }
 
        if (ans == LLONG_MAX) cout << -1 << '
';
        else cout << ans << '
';
    }
 
    return 0;
}
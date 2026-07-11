#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    cin >> q;
 
    while (q--) {
        long long k, n, a, b;
        cin >> k >> n >> a >> b;
 
        if (n * b >= k) {
            cout << -1 << '
';
        } else {
            long long x = (k - 1 - n * b) / (a - b);
            cout << min(n, x) << '
';
        }
    }
}
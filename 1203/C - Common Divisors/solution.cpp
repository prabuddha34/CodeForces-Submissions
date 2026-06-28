#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    ll g;
    cin >> g;
 
    for (int i = 1; i < n; i++) {
        ll x;
        cin >> x;
        g = __gcd(g, x);
    }
 
    ll ans = 0;
 
    for (ll d = 1; d * d <= g; d++) {
        if (g % d == 0) {
            ans++;              // d
            if (d != g / d) ans++; // g / d
        }
    }
 
    cout << ans << "
";
 
    return 0;
}
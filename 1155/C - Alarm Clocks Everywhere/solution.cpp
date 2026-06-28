#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<ll> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
 
    ll g = 0;
 
    for (int i = 1; i < n; i++) {
        g = __gcd(g, x[i] - x[0]);
    }
 
    for (int j = 1; j <= m; j++) {
        ll p;
        cin >> p;
 
        if (g % p == 0) {
            cout << "YES
";
            cout << x[0] << " " << j << endl;
            return 0;
        }
    }
 
    cout << "NO
";
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
 
        ll x[3] = {a, b, c};
        sort(x, x + 3);
 
        while (x[2] > x[0] + x[1]) {
            x[2] = x[0] + x[1];
            sort(x, x + 3);
        }
 
        cout << x[2] - x[0] << '
';
    }
 
    return 0;
}
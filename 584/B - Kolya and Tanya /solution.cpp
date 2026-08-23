#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll MOD = 1000000007LL;
 
ll power(ll a, ll b) {
    ll res = 1;
 
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
 
        a = a * a % MOD;
        b >>= 1;
    }
 
    return res;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
 
    ll total = power(27, n);
    ll bad = power(7, n);
 
    cout << (total - bad + MOD) % MOD << '
';
 
    return 0;
}
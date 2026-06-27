#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
ll zeros(ll n) {
    ll cnt = 0;
    while (n) {
        n /= 5;
        cnt += n;
    }
    return cnt;
}
 
int main() {
    ll m;
    cin >> m;
 
    ll lo = 1, hi = 5LL * m + 5;
 
    while (lo < hi) {
        ll mid = (lo + hi) / 2;
 
        if (zeros(mid) >= m)
            hi = mid;
        else
            lo = mid + 1;
    }
 
    if (zeros(lo) != m) {
        cout << 0 << '
';
    } else {
        cout << 5 << '
';
        for (int i = 0; i < 5; i++)
            cout << lo + i << " ";
    }
}
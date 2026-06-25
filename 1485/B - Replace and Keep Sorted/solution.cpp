#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, q;
    long long k;
    cin >> n >> q >> k;
 
    vector<long long> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    vector<long long> pref(n + 1, 0);
 
    for (int i = 2; i <= n - 1; i++) {
        pref[i] = pref[i - 1] + (a[i + 1] - a[i - 1] - 2);
    }
 
    while (q--) {
        int l, r;
        cin >> l >> r;
 
        if (l == r) {
            cout << k - 1 << endl;
            continue;
        }
 
        long long ans = 0;
 
        // change first element
        ans += a[l + 1] - 2;
 
        // change last element
        ans += k - a[r - 1] - 1;
 
        // change middle elements
        ans += pref[r - 1] - pref[l];
 
        cout << ans << endl;
    }
 
    return 0;
}
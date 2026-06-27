#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
 
    long long mn = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
 
    // Complete rounds
    long long ans = mn * n;
 
    // Remove complete rounds
    for (int i = 0; i < n; i++)
        a[i] -= mn;
 
    // Duplicate array for circular traversal
    vector<long long> b(2 * n);
    for (int i = 0; i < 2 * n; i++)
        b[i] = a[i % n];
 
    int cur = 0, mx = 0;
 
    for (int i = 0; i < 2 * n; i++) {
        if (b[i] > 0)
            cur++;
        else
            cur = 0;
 
        // Prevent taking more than n elements
        cur = min(cur, n);
 
        mx = max(mx, cur);
    }
 
    cout << ans + mx << '
';
 
    return 0;
}
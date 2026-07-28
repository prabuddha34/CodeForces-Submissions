#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, l, r, Ql, Qr;
    cin >> n >> l >> r >> Ql >> Qr;
 
    vector<long long> prefix(n + 1, 0);
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        prefix[i] = prefix[i - 1] + x;
    }
 
    long long total = prefix[n];
    long long ans = LLONG_MAX;
 
    for (int left = 0; left <= n; left++) {
        int right = n - left;
 
        long long leftWeight = prefix[left];
        long long rightWeight = total - leftWeight;
 
        long long cost = leftWeight * l + rightWeight * r;
 
        if (left > right + 1)
            cost += 1LL * (left - right - 1) * Ql;
        else if (right > left + 1)
            cost += 1LL * (right - left - 1) * Qr;
 
        ans = min(ans, cost);
    }
 
    cout << ans << "
";
    return 0;
}
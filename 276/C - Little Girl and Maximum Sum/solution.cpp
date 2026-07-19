#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;
 
    vector<long long> a(n), d(n + 1), cnt(n);
 
    for (auto &x : a)
        cin >> x;
 
    while (q--) {
        int l, r;
        cin >> l >> r;
 
        d[l - 1]++;
        d[r]--;
    }
 
    cnt[0] = d[0];
 
    for (int i = 1; i < n; i++)
        cnt[i] = cnt[i - 1] + d[i];
 
    sort(a.begin(), a.end());
    sort(cnt.begin(), cnt.end());
 
    long long ans = 0;
 
    for (int i = 0; i < n; i++)
        ans += a[i] * cnt[i];
 
    cout << ans << '
';
 
    return 0;
}
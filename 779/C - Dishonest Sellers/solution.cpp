#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n), b(n);
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    vector<pair<int, int>> v;
 
    for (int i = 0; i < n; i++) {
        v.push_back({a[i] - b[i], i});
    }
 
    sort(v.begin(), v.end());
 
    long long ans = 0;
 
    for (int i = 0; i < n; i++) {
        int idx = v[i].second;
 
        if (i < k) {
            ans += a[idx];
        } else {
            ans += min(a[idx], b[idx]);
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
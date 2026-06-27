#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
    int n;
    cin >> n;
 
    map<int, int> diag1, diag2;
 
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
 
        diag1[x - y]++;
        diag2[x + y]++;
    }
 
    int ans = 0;
 
    for (auto it : diag1)
        ans += it.second * (it.second - 1) / 2;
 
    for (auto it : diag2)
        ans += it.second * (it.second - 1) / 2;
 
    cout << ans << '
';
}
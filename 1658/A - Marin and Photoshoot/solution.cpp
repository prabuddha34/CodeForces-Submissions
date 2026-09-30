#include <bits/stdc++.h>
using namespace std;
 
const int N = 2e5 + 5;
 
int n;
string s;
vector<int> v;
 
void solve() {
    v.clear();
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') v.push_back(i);
    }
    for (int i = 0; i < (int)v.size() - 1; ++i) {
        if (v[i + 1] - v[i] <= 2) ans += 2 - (v[i + 1] - v[i]) + 1;
    }
    cout << ans << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}
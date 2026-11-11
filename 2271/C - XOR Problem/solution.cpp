#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int x = 1;
    while (2 * x <= n) x *= 2;
 
    vector<int> p;
    for (int i = 0; i < x; i++) p.push_back(i);
    for (int i = x - 1; i >= 0; i--) p.push_back(i);
    for (int i = x; i < 2 * x; i++) p.push_back(i);
    for (int i = 2 * x - 1; i >= x; i--) p.push_back(i);
 
    cout << (int)p.size() - 1 << '
';
    for (int i = 1; i < (int)p.size(); i++)
        cout << (p[i] ^ p[i - 1]) << " 
"[i == (int)p.size() - 1];
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}
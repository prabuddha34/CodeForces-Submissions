#include <bits/stdc++.h>
 
using namespace std;
#define int long long
 
int n, k, a, b, c;
string p, q, r;
 
int get(string &s) {
    int a = 0, b = 0;
    for (char c : s)
        if (c == '0') a++;
        else b++;
    return a * b;
}
 
map<array<int, 4>, int> mp;
 
int solve(int l, int a, int b, int c) {
    array<int, 4> t = {l, a, b, c};
    if (mp.find(t) == mp.end()) {
        if (l == 0) mp[t] = a + b;
        else mp[t] = solve(l - 1, c, a, b) + solve(l - 1, b, c, a) - c;
    }
    return mp[t];
}
 
void test_case() {
    cin >> n >> k >> p >> q;
    r.clear();
    for (int i = 0; i < n; i++)
        r.push_back('0' + ((p[i] - '0') ^ (q[i] - '0')));
    a = get(p);
    b = get(q);
    c = get(r);
    mp.clear();
    cout << solve(k, a, b, c) << '
';
}
 
int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) test_case();
}
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using State = tuple<int,int,int,int,int>;
 
struct DSU {
    int p[4];
 
    DSU() {
        iota(p, p + 4, 0);
    }
 
    int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]);
    }
 
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
 
        if (a == b) return false;
 
        p[a] = b;
        return true;
    }
};
 
void solve() {
    int n;
    cin >> n;
 
    vector<ll> a(n), b(n);
 
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
 
    if (n == 1) {
        cout << (a[0] == b[0] ? 2 : 1) << '
';
        return;
    }
 
    map<State, ll> dp, ndp;
 
    dp[{0, 0, 0, 1, 0}] = 0;
    dp[{1, 1, 0, 0, 0}] = (a[0] == b[0] ? 2 : 1);
 
    for (int i = 1; i < n; i++) {
        ndp.clear();
 
        for (auto &[state, val] : dp) {
            auto [da, db, ca, cb, cnt] = state;
 
            int u[] = {0, 2, 2};
            int v[] = {3, 1, 3};
 
            for (int mask = 0; mask < 8; mask++) {
                DSU dsu;
 
                if (ca == cb)
                    dsu.unite(0, 1);
 
                int deg[4] = {da, db, 0, 0};
 
                bool ok = true;
                ll sum = val;
 
                for (int j = 0; j < 3; j++) {
                    if (!(mask & (1 << j)))
                        continue;
 
                    int x = u[j];
                    int y = v[j];
 
                    if (deg[x] == 2 || deg[y] == 2) {
                        ok = false;
                        break;
                    }
 
                    if (!dsu.unite(x, y)) {
                        ok = false;
                        break;
                    }
 
                    deg[x]++;
                    deg[y]++;
 
                    ll w;
 
                    if (x == 0)
                        w = (a[i - 1] == b[i] ? 2 : 1);
                    else if (y == 1)
                        w = (a[i] == b[i - 1] ? 2 : 1);
                    else
                        w = (a[i] == b[i] ? 2 : 1);
 
                    sum += w;
                }
 
                if (!ok) continue;
 
                int needA = (i == 1 ? 1 : 2);
 
                if (deg[0] != needA)
                    continue;
 
                if (deg[1] != 1 && deg[1] != 2)
                    continue;
 
                int newCnt = cnt + (deg[1] == 1);
 
                if (newCnt > 1)
                    continue;
 
                int r0 = dsu.find(0);
                int r1 = dsu.find(1);
 
                bool found0 = (dsu.find(2) == r0 ||
                               dsu.find(3) == r0);
 
                bool found1 = (dsu.find(2) == r1 ||
                               dsu.find(3) == r1);
 
                if (!found0 || !found1)
                    continue;
 
                int c1 = dsu.find(2);
                int c2 = dsu.find(3);
 
                int nc1 = 0;
                int nc2 = (c1 == c2 ? 0 : 1);
 
                State ns = {
                    deg[2], deg[3],
                    nc1, nc2,
                    newCnt
                };
 
                if (!ndp.count(ns))
                    ndp[ns] = LLONG_MIN;
 
                ndp[ns] = max(ndp[ns], sum);
            }
        }
 
        dp.swap(ndp);
    }
 
    ll ans = LLONG_MIN;
 
    for (auto &[state, val] : dp) {
        auto [da, db, ca, cb, cnt] = state;
 
        if (da != 2) continue;
        if (db != 1 && db != 2) continue;
        if (cnt + (db == 1) != 1) continue;
        if (ca != cb) continue;
 
        ans = max(ans, val);
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) solve();
 
    return 0;
}
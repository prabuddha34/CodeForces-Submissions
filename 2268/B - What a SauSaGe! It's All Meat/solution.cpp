#include <bits/stdc++.h>
using namespace std;
 
const int SZ = 8;
const int INF = -1000000000;
 
int H[8] = {0, 3, 5, 6, 9, 10, 12, 15};
 
struct Node {
    int dp[8];
};
 
Node seg[800005];
int a[200005];
 
Node mergeNode(Node &L, Node &R) {
    Node res;
 
    for (int i = 0; i < 8; i++) {
        res.dp[i] = INF;
 
        for (int j = 0; j < 8; j++) {
            int k = 0;
 
            for (int z = 0; z < 8; z++) {
                if (H[z] == (H[i] ^ H[j])) {
                    k = z;
                    break;
                }
            }
 
            res.dp[i] = max(res.dp[i], L.dp[j] + R.dp[k]);
        }
    }
 
    return res;
}
 
Node makeNode(int x) {
    Node res;
 
    for (int i = 0; i < 8; i++) {
        res.dp[i] = ((x ^ H[i]) % 3 == 0);
    }
 
    return res;
}
 
void build(int id, int l, int r) {
    if (l == r) {
        seg[id] = makeNode(a[l]);
        return;
    }
 
    int mid = (l + r) / 2;
 
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);
 
    seg[id] = mergeNode(seg[id * 2], seg[id * 2 + 1]);
}
 
void update(int id, int l, int r, int pos, int val) {
    if (l == r) {
        seg[id] = makeNode(val);
        return;
    }
 
    int mid = (l + r) / 2;
 
    if (pos <= mid)
        update(id * 2, l, mid, pos, val);
    else
        update(id * 2 + 1, mid + 1, r, pos, val);
 
    seg[id] = mergeNode(seg[id * 2], seg[id * 2 + 1]);
}
 
void solve() {
    int n, q;
    cin >> n >> q;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    build(1, 1, n);
 
    cout << seg[1].dp[0];
 
    while (q--) {
        int p, x;
        cin >> p >> x;
 
        a[p] = x;
 
        update(1, 1, n, p, x);
 
        cout << " " << seg[1].dp[0];
    }
 
    cout << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}
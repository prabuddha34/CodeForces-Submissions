#include <bits/stdc++.h>
using namespace std;
 
const int N = 300005;
 
int parent[N], ans[N];
 
int Find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = Find(parent[x]);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    for (int i = 1; i <= n + 1; i++)
        parent[i] = i;
 
    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;
 
        int cur = Find(l);
        while (cur <= r) {
            if (cur == x) {
                cur = Find(cur + 1);
            } else {
                ans[cur] = x;
                parent[cur] = Find(cur + 1); // remove cur
                cur = Find(cur);
            }
        }
    }
 
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << "
";
 
    return 0;
}
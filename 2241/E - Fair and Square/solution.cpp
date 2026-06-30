#include <bits/stdc++.h>
using namespace std;
 
const int N = 200005;
 
vector<int> g[N];
int sub[N];
long long a[N];
 
void dfs(int v, int p) {
    sub[v] = 1;
 
    for (int child : g[v]) {
        if (child == p) continue;
 
        dfs(child, v);
        sub[v] += sub[child];
    }
}
 
bool isSquare(long long x) {
    long long r = sqrt(x);
    return r * r == x;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            g[i].clear();
        }
 
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
 
            g[u].push_back(v);
            g[v].push_back(u);
        }
 
        dfs(1, 0);
 
        long long squarewf = 0;
 
        for (int v = 1; v <= n; v++) {
            if (!isSquare(a[v])) continue;
 
            vector<long long> parts;
 
            parts.push_back(1);
 
            for (int child : g[v]) {
                if (sub[child] < sub[v]) {
                    parts.push_back(sub[child]);
                } else {
                    parts.push_back(n - sub[v]);
                }
            }
 
            long long sum1 = 0, sum2 = 0;
 
            for (long long x : parts) {
                squarewf += sum2 * x;
                sum2 += sum1 * x;
                sum1 += x;
            }
        }
 
        cout << squarewf << '
';
    }
 
    return 0;
}
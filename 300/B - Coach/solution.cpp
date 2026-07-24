#include <bits/stdc++.h>
using namespace std;
 
const int N = 55;
 
vector<int> adj[N];
bool vis[N];
 
vector<vector<int>> one, two, three;
vector<int> comp;
 
void dfs(int u) {
    vis[u] = true;
    comp.push_back(u);
 
    for (int v : adj[u]) {
        if (!vis[v])
            dfs(v);
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            comp.clear();
            dfs(i);
 
            if (comp.size() > 3) {
                cout << -1;
                return 0;
            }
 
            if (comp.size() == 1)
                one.push_back(comp);
            else if (comp.size() == 2)
                two.push_back(comp);
            else
                three.push_back(comp);
        }
    }
 
    if (one.size() < two.size()) {
        cout << -1;
        return 0;
    }
 
    // Complete size-2 components
    for (auto &v : two) {
        v.push_back(one.back()[0]);
        one.pop_back();
    }
 
    if (one.size() % 3 != 0) {
        cout << -1;
        return 0;
    }
 
    // Print size-3 components
    for (auto &v : three) {
        cout << v[0] << " " << v[1] << " " << v[2] << "
";
    }
 
    // Print completed size-2 components
    for (auto &v : two) {
        cout << v[0] << " " << v[1] << " " << v[2] << "
";
    }
 
    // Group remaining singles
    for (int i = 0; i < one.size(); i += 3) {
        cout << one[i][0] << " "
             << one[i + 1][0] << " "
             << one[i + 2][0] << "
";
    }
 
    return 0;
}
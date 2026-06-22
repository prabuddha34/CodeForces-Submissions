#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<vector<int>> g(n + 1);
 
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
 
    vector<int> path;
    vector<int> visited(n + 1, 0);
    vector<int> parent(n + 1, 0);
    vector<int> idx(n + 1, 0);
 
    stack<int> st;
    st.push(1);
    visited[1] = 1;
    path.push_back(1);
 
    while (!st.empty()) {
        int v = st.top();
        bool moved = false;
 
        while (idx[v] < (int)g[v].size()) {
            int child = g[v][idx[v]++];
 
            if (!visited[child]) {
                visited[child] = 1;
                parent[child] = v;
                st.push(child);
                path.push_back(child);
                moved = true;
                break;
            }
        }
 
        if (!moved) {
            st.pop();
 
            if (!st.empty()) {
                path.push_back(st.top());
            }
        }
    }
 
    int limit = (2 * n + k - 1) / k;
    int pos = 0;
 
    for (int i = 0; i < k; i++) {
        int cnt = min(limit, (int)path.size() - pos);
 
        if (cnt <= 0) {
            cout << 1 << " " << 1 << "
";
        } else {
            cout << cnt << " ";
            for (int j = 0; j < cnt; j++) {
                cout << path[pos++] << " ";
            }
            cout << "
";
        }
    }
 
    return 0;
}
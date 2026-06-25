#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e5 + 10;
 
vector<int> g[N];
int vis[N];
int level[N];
 
void bfs(int source = 1) {
    queue<int> q;
 
    q.push(source);
    vis[source] = 1;
    level[source] = 0;
 
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
 
        for (int child : g[curr]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = 1;
                level[child] = level[curr] + 1;
            }
        }
    }
}
 
int main() {
int t;
    cin >> t;
    while (t--) {
        long long n,r;
        cin >> n >> r;
        if (r<n) {
            cout<<r*(r+1)/2<<endl;
        }
        else {
            cout << n * (n - 1) / 2 + 1 << endl;
        }
    }
    return 0;
}
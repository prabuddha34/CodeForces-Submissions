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
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.rbegin(), a.rend());
 
        long long alice = 0, bob = 0;
 
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                // Alice's turn
                if (a[i] % 2 == 0) alice += a[i];
            } else {
                // Bob's turn
                if (a[i] % 2 == 1) bob += a[i];
            }
        }
 
        if (alice > bob) cout << "Alice
";
        else if (bob > alice) cout << "Bob
";
        else cout << "Tie
";
    }
 
    return 0;
}
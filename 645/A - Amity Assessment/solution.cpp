#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
 
    string start = a + b;
    string target = c + d;
 
    vector<vector<int>> adj = {
        {1, 2}, // index 0
        {0, 3}, // index 1
        {0, 3}, // index 2
        {1, 2}  // index 3
    };
 
    queue<string> q;
    set<string> visited;
 
    q.push(start);
    visited.insert(start);
 
    while (!q.empty()) {
        string cur = q.front();
        q.pop();
 
        if (cur == target) {
            cout << "YES
";
            return 0;
        }
 
        int x = cur.find('X');
 
        for (int nxt : adj[x]) {
            string temp = cur;
            swap(temp[x], temp[nxt]);
 
            if (!visited.count(temp)) {
                visited.insert(temp);
                q.push(temp);
            }
        }
    }
 
    cout << "NO
";
    return 0;
}
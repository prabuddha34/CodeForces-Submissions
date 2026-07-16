#include <bits/stdc++.h>
using namespace std;
 
int n, m;
string name[20];
bool bad[20][20];
 
vector<int> cur, ans;
 
void solve(int id) {
    if (id == n) {
        if (cur.size() > ans.size()) {
            ans = cur;
        }
        return;
    }
 
    // Try adding person id
    bool ok = true;
 
    for (int x : cur) {
        if (bad[id][x]) {
            ok = false;
            break;
        }
    }
 
    if (ok) {
        cur.push_back(id);
        solve(id + 1);
        cur.pop_back();
    }
 
    // Do not add person id
    solve(id + 1);
}
 
int main() {
    cin >> n >> m;
 
    map<string, int> id;
 
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        id[name[i]] = i;
    }
 
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
 
        int x = id[a];
        int y = id[b];
 
        bad[x][y] = true;
        bad[y][x] = true;
    }
 
    solve(0);
 
    vector<string> result;
 
    for (int x : ans) {
        result.push_back(name[x]);
    }
 
    sort(result.begin(), result.end());
 
    cout << result.size() << '
';
 
    for (string s : result) {
        cout << s << '
';
    }
 
    return 0;
}
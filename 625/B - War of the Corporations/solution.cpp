#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, p;
    cin >> s >> p;
 
    int n = s.size();
    int m = p.size();
 
    vector<pair<int,int>> occ;
 
    for (int i = 0; i + m <= n; i++) {
        bool ok = true;
 
        for (int j = 0; j < m; j++) {
            if (s[i + j] != p[j]) {
                ok = false;
                break;
            }
        }
 
        if (ok) {
            occ.push_back({i, i + m - 1});
        }
    }
 
    int ans = 0;
    int lastBlocked = -1;
 
    for (auto it : occ) {
        int l = it.first;
        int r = it.second;
 
        if (lastBlocked < l) {
            ans++;
            lastBlocked = r;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
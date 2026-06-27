#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    const int MAXA = 100000;
    vector<vector<int>> pos(MAXA + 1);
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x].push_back(i);
    }
 
    vector<pair<int, int>> ans;
 
    for (int x = 1; x <= MAXA; x++) {
        if (pos[x].empty()) continue;
 
        if (pos[x].size() == 1) {
            ans.push_back({x, 0});
        } else {
            int diff = pos[x][1] - pos[x][0];
            bool ok = true;
 
            for (int i = 2; i < (int)pos[x].size(); i++) {
                if (pos[x][i] - pos[x][i - 1] != diff) {
                    ok = false;
                    break;
                }
            }
 
            if (ok) ans.push_back({x, diff});
        }
    }
 
    cout << ans.size() << '
';
 
    for (auto [x, d] : ans) {
        cout << x << " " << d << '
';
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<string> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    vector<pair<int,int>> ans;
 
    
    bool ok = true;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == '.') {
                ans.push_back({i + 1, j + 1});
                found = true;
                break;
            }
        }
        if (!found) {
            ok = false;
            break;
        }
    }
 
    if (ok) {
        for (auto [x, y] : ans)
            cout << x << " " << y << "
";
        return 0;
    }
 
    ans.clear();
 
    
    ok = true;
    for (int j = 0; j < n; j++) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == '.') {
                ans.push_back({i + 1, j + 1});
                found = true;
                break;
            }
        }
        if (!found) {
            ok = false;
            break;
        }
    }
 
    if (ok) {
        for (auto [x, y] : ans)
            cout << x << " " << y << "
";
    } else {
        cout << -1;
    }
}
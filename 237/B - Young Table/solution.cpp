#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> c(n);
    int s = 0;
 
    for (int &x : c) {
        cin >> x;
        s += x;
    }
 
    vector<int> a(s), pos(s + 1);
    vector<pair<int,int>> cell(s);
 
    int k = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < c[i]; j++) {
            cin >> a[k];
            pos[a[k]] = k;
            cell[k] = {i + 1, j + 1};
            k++;
        }
    }
 
    vector<array<int,4>> ans;
 
    for (int i = 0; i < s; i++) {
        int need = i + 1;
 
        if (a[i] == need)
            continue;
 
        int j = pos[need];
 
        ans.push_back({
            cell[i].first, cell[i].second,
            cell[j].first, cell[j].second
        });
 
        pos[a[i]] = j;
        pos[a[j]] = i;
        swap(a[i], a[j]);
    }
 
    cout << ans.size() << '
';
 
    for (auto x : ans)
        cout << x[0] << ' ' << x[1] << ' '
             << x[2] << ' ' << x[3] << '
';
 
    return 0;
}
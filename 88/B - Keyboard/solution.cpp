#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m>>x;
    vector<pair<int,int>>s;
    vector<pair<int,int>>p[26];
    for(int i=0;i<n;i++) {
        string t;
        cin>>t;
        for (int j = 0; j < m; j++) {
            if (t[j] == 'S')
                s.push_back({i, j});
            else
                p[t[j] - 'a'].push_back({i, j});
        }
    }
    
    bool ok[26] = {};
 
    for (int i = 0; i < 26; i++) {
        for (auto a : p[i]) {
            for (auto b : s) {
                int dx = a.first - b.first;
                int dy = a.second - b.second;
 
                if (dx * dx + dy * dy <= x * x)
                    ok[i] = true;
            }
        }
    }
 
    int q, ans = 0;
    string t;
    cin >> q >> t;
 
    for (char c : t) {
        if (islower(c)) {
            if (p[c - 'a'].empty()) {
                cout << -1;
                return 0;
            }
        } else {
            int i = c - 'A';
 
            if (p[i].empty() || s.empty()) {
                cout << -1;
                return 0;
            }
 
            if (!ok[i])
                ans++;
        }
    }
 
    cout << ans;
}
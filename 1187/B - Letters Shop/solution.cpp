#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    vector<vector<int>> pos(26);
 
    for (int i = 0; i < n; i++) {
        pos[s[i] - 'a'].push_back(i + 1); 
    }
 
    int m;
    cin >> m;
 
    while (m--) {
        string t;
        cin >> t;
 
        vector<int> need(26, 0);
 
        for (char c : t) {
            need[c - 'a']++;
        }
 
        int ans = 0;
 
        for (int c = 0; c < 26; c++) {
            if (need[c] > 0) {
                ans = max(ans, pos[c][need[c] - 1]);
            }
        }
 
        cout << ans << "
";
    }
 
    return 0;
}
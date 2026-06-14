#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    string s, t;
    cin >> s >> t;
 
    int mn = INT_MAX;
    vector<int> ans;
 
    for (int i = 0; i <= m - n; i++) {
        vector<int> cur;
 
        for (int j = 0; j < n; j++) {
            if (s[j] != t[i + j]) {
                cur.push_back(j + 1); // 1-based
            }
        }
 
        if ((int)cur.size() < mn) {
            mn = cur.size();
            ans = cur;
        }
    }
 
    cout << mn << "
";
 
    for (int x : ans)
        cout << x << " ";
 
    cout << "
";
 
    return 0;
}
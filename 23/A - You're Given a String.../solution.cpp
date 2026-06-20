#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
    int ans = 0;
 
    for (int len = 1; len <= n; len++) {
        map<string, int> mp;
 
        for (int i = 0; i + len <= n; i++) {
            string sub = s.substr(i, len);
            mp[sub]++;
 
            if (mp[sub] >= 2) {
                ans = max(ans, len);
            }
        }
    }
 
    cout << ans << endl;
    return 0;
}
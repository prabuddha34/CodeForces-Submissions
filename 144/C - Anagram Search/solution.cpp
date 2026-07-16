#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, p;
    cin >> s >> p;
 
    int n = s.size(), m = p.size();
 
    if (m > n) {
        cout << 0;
        return 0;
    }
 
    int need[26] = {}, have[26] = {};
    int q = 0, ans = 0;
 
    for (char c : p)
        need[c - 'a']++;
 
    for (int i = 0; i < m; i++) {
        if (s[i] == '?')
            q++;
        else
            have[s[i] - 'a']++;
    }
 
    for (int l = 0; l + m <= n; l++) {
        bool ok = true;
 
        for (int j = 0; j < 26; j++) {
            if (have[j] > need[j]) {
                ok = false;
                break;
            }
        }
 
        if (ok)
            ans++;
 
        if (l + m < n) {
            if (s[l] == '?')
                q--;
            else
                have[s[l] - 'a']--;
 
            if (s[l + m] == '?')
                q++;
            else
                have[s[l + m] - 'a']++;
        }
    }
 
    cout << ans;
}
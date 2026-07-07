#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, t;
    cin >> s >> t;
 
    int m = s.size();
    int n = t.size();
 
    vector<int> pref(n + 1, 0);
    vector<int> suff(n + 1, 0);
 
    int j = 0;
 
    for (int i = 0; i < n; i++) {
        if (j < m && t[i] == s[j]) {
            j++;
        }
        pref[i + 1] = j;
    }
 
    j = m - 1;
    int matched = 0;
 
   
    for (int i = n - 1; i >= 0; i--) {
        if (j >= 0 && t[i] == s[j]) {
            j--;
            matched++;
        }
        suff[i] = matched;
    }
 
    long long ans = 0;
 
 
    for (int i = 0; i <= n; i++) {
        if (pref[i] == m && suff[i] == m) {
            ans++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
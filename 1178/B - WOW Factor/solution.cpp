#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
 
    vector<ll> pref(n, 0);
 
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1];
 
        if (s[i] == 'v' && s[i - 1] == 'v') {
            pref[i]++;
        }
    }
 
    ll totalW = pref[n - 1];
    ll ans = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') {
            ll leftW = pref[i];
            ll rightW = totalW - pref[i];
 
            ans += leftW * rightW;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
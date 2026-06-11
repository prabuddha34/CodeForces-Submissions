#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int k;
    cin >> k;
 
    int w[26];
    int mx = 0;
 
    for (int i = 0; i < 26; i++) {
        cin >> w[i];
        mx = max(mx, w[i]);
    }
 
    long long ans = 0;
 
    for (int i = 0; i < s.length(); i++) {
        ans += 1LL * (i + 1) * w[s[i] - 'a'];
    }
 
    int pos = s.length() + 1;
 
    for (int i = 0; i < k; i++) {
        ans += 1LL * pos * mx;
        pos++;
    }
 
    cout << ans << endl;
 
    return 0;
}
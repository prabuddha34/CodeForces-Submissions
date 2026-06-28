#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    string t;
    cin >> n >> k >> t;
 
    int overlap = 0;
 
    for (int len = 1; len < n; len++) {
        if (t.substr(0, len) == t.substr(n - len, len)) {
            overlap = len;
        }
    }
 
    string add = t.substr(overlap);
 
    string ans = t;
    for (int i = 1; i < k; i++) {
        ans += add;
    }
 
    cout << ans << '
';
 
    return 0;
}
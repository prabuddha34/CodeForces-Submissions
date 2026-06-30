#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
 
        long long ans = s.size();
        int cur = 0;
        int mn = 0;
 
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '+') cur++;
            else cur--;
 
            if (cur < mn) {
                mn = cur;
                ans += i + 1;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        bool same = true;
 
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                same = false;
                break;
            }
        }
 
        if (same) {
            cout << -1 << '
';
        } else {
            sort(s.begin(), s.end());
            cout << s << '
';
        }
    }
 
    return 0;
}
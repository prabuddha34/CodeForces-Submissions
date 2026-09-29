#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s, x;
        cin >> s >> x;
 
        bool ok = false;
 
        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] == x[0])
                ok = true;
        }
 
        cout << (ok ? "YES" : "NO") << '
';
    }
}
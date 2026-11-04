#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string p, q;
        cin >> p >> q;
 
        int a[26] = {}, b[26] = {};
 
        for (char c : p) a[c - 'a']++;
        for (char c : q) b[c - 'a']++;
 
        a['s' - 'a']--;
        a['i' - 'a']--;
        a['x' - 'a']--;
 
        bool ok = true;
 
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                ok = false;
                break;
            }
        }
 
        cout << (ok ? "YES" : "NO") << '
';
    }
 
    return 0;
}
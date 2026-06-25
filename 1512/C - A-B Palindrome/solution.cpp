#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b;
        string s;
 
        cin >> a >> b >> s;
 
        int n = s.size();
        bool ok = true;
 
        // Step 1: force mirror equality
        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;
 
            if (s[i] != '?' && s[j] != '?' && s[i] != s[j]) {
                ok = false;
            }
 
            if (s[i] == '?' && s[j] != '?') {
                s[i] = s[j];
            }
 
            if (s[i] != '?' && s[j] == '?') {
                s[j] = s[i];
            }
        }
 
        // Step 2: subtract already used chars
        for (char c : s) {
            if (c == '0') a--;
            if (c == '1') b--;
        }
 
        if (a < 0 || b < 0) ok = false;
 
        // Step 3: fill remaining ?? pairs
        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;
 
            if (i >= j) continue;
 
            if (s[i] == '?' && s[j] == '?') {
                if (a >= 2) {
                    s[i] = s[j] = '0';
                    a -= 2;
                } 
                else if (b >= 2) {
                    s[i] = s[j] = '1';
                    b -= 2;
                } 
                else {
                    ok = false;
                }
            }
        }
 
        // Step 4: fill middle if needed
        if (n % 2 == 1 && s[n / 2] == '?') {
            if (a > 0) {
                s[n / 2] = '0';
                a--;
            } 
            else if (b > 0) {
                s[n / 2] = '1';
                b--;
            } 
            else {
                ok = false;
            }
        }
 
        // Step 5: final check
        string rev = s;
        reverse(rev.begin(), rev.end());
 
        if (s != rev || a != 0 || b != 0) {
            ok = false;
        }
 
        cout << (ok ? s : "-1") << endl;
    }
 
    return 0;
}
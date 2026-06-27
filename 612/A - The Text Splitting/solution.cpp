#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, p, q;
    cin >> n >> p >> q;
 
    string s;
    cin >> s;
 
    for (int x = 0; x * p <= n; x++) {
 
        int rem = n - x * p;
 
        if (rem % q == 0) {
 
            int y = rem / q;
 
            cout << x + y << '
';
 
            int idx = 0;
 
            while (x--) {
                cout << s.substr(idx, p) << '
';
                idx += p;
            }
 
            while (y--) {
                cout << s.substr(idx, q) << '
';
                idx += q;
            }
 
            return 0;
        }
    }
 
    cout << -1 << '
';
}
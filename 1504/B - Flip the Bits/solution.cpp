#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string a, b;
 
        cin >> n >> a >> b;
 
        vector<int> balanced(n, 0);
 
        int zero = 0, one = 0;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == '0') zero++;
            else one++;
 
            if (zero == one) {
                balanced[i] = 1;
            }
        }
 
        bool flip = false;
        bool ok = true;
 
        for (int i = n - 1; i >= 0; i--) {
            char cur = a[i];
 
            if (flip) {
                cur = (cur == '0' ? '1' : '0');
            }
 
            if (cur != b[i]) {
                if (!balanced[i]) {
                    ok = false;
                    break;
                }
 
                flip = !flip;
            }
        }
 
        cout << (ok ? "YES" : "NO") << endl;
    }
 
    return 0;
}
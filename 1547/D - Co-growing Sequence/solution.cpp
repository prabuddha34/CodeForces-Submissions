#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> x(n), y(n), z(n);
 
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
 
        y[0] = 0;
        z[0] = x[0];
 
        for (int i = 1; i < n; i++) {
            y[i] = 0;
 
            for (int bit = 0; bit < 30; bit++) {
                int prev = (z[i - 1] >> bit) & 1;
                int cur = (x[i] >> bit) & 1;
 
                if (prev == 1 && cur == 0) {
                    y[i] |= (1 << bit);
                }
            }
 
            z[i] = x[i] ^ y[i];
        }
 
        for (int i = 0; i < n; i++) {
            cout << y[i] << " ";
        }
        cout << "
";
    }
 
    return 0;
}
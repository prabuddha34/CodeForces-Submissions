#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n + 1);
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
        cout << 3 * n << endl;
 
        for (int i = 1; i <= n; i += 2) {
            for (int j = 0; j < 3; j++) {
                cout << 1 << " " << i << " " << i + 1 << endl;
                cout << 2 << " " << i << " " << i + 1 << endl;
            }
        }
    }
 
    return 0;
}
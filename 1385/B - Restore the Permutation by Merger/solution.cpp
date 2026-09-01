#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(2 * n);
 
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }
 
        vector<bool> seen(n + 1, false);
 
        for (int x : a) {
            if (!seen[x]) {
                cout << x << " ";
                seen[x] = true;
            }
        }
 
        cout << '
';
    }
 
    return 0;
}
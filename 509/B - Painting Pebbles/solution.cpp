#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
 
    int mn = 101, mx = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
 
    if (mx - mn > k) {
        cout << "NO
";
        return 0;
    }
 
    cout << "YES
";
 
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= a[i]; j++) {
            cout << ((j - 1) % k) + 1 << " ";
        }
        cout << '
';
    }
 
    return 0;
}
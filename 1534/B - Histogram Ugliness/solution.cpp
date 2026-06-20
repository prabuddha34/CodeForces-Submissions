#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        long long ans = a[0] + a[n - 1];
 
        for (int i = 0; i < n - 1; i++) {
            ans += abs(a[i] - a[i + 1]);
        }
 
        for (int i = 0; i < n; i++) {
            long long left = 0, right = 0;
 
            if (i > 0) left = a[i - 1];
            if (i < n - 1) right = a[i + 1];
 
            if (a[i] > left && a[i] > right) {
                ans -= a[i] - max(left, right);
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
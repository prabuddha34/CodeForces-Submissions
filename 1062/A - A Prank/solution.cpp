#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int ans = 0;
 
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            int len = r - l + 1;
 
            int left = (l == 0 ? 1 : a[l - 1] + 1);
            int right = (r == n - 1 ? 1000 : a[r + 1] - 1);
 
            int choices = right - left + 1;
 
            if (choices == len) {
                ans = max(ans, len);
            }
        }
    }
 
    cout << ans << '
';
    return 0;
}
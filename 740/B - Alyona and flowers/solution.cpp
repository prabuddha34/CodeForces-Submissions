#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n + 1);
    vector<int> pref(n + 1, 0);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
 
    int ans = 0;
 
    while (m--) {
        int l, r;
        cin >> l >> r;
 
        int sum = pref[r] - pref[l - 1];
 
        if (sum > 0) {
            ans += sum;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
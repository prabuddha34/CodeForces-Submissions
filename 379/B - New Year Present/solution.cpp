#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    string ans;
 
    for (int i = 1; i <= n; i++) {
        while (a[i]--) {
            if (i == n) ans += "PLR";
            else ans += "PRL";
        }
 
        if (i != n) ans += "R";
    }
 
    cout << ans << '
';
 
    return 0;
}
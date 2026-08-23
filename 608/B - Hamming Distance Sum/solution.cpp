#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string a, b;
    cin >> a >> b;
 
    int n = a.size();
    int m = b.size();
 
    vector<int> prefix(m + 1, 0);
 
    for (int i = 0; i < m; i++) {
        prefix[i + 1] = prefix[i] + (b[i] == '1');
    }
 
    long long ans = 0;
 
    int windows = m - n + 1;
 
    for (int i = 0; i < n; i++) {
        int l = i;
        int r = i + windows - 1;
 
        int ones = prefix[r + 1] - prefix[l];
        int zeros = windows - ones;
 
        if (a[i] == '0')
            ans += ones;
        else
            ans += zeros;
    }
 
    cout << ans << '
';
 
    return 0;
}
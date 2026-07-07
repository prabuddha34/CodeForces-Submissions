#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    if (m < n - 1 || m > 2 * (n + 1)) {
        cout << -1 << endl;
        return 0;
    }
 
    vector<int> gap(n + 1, 0);
 
    // Put 1 between every two zeroes
    for (int i = 1; i <= n - 1; i++) {
        gap[i] = 1;
        m--;
    }
 
    // Put remaining ones in gaps, max 2 per gap
    for (int i = 0; i <= n && m > 0; i++) {
        while (gap[i] < 2 && m > 0) {
            gap[i]++;
            m--;
        }
    }
 
    string ans = "";
 
    for (int i = 0; i < n; i++) {
        while (gap[i] > 0) {
            ans += '1';
            gap[i]--;
        }
 
        ans += '0';
    }
 
    // Last gap after final zero
    while (gap[n] > 0) {
        ans += '1';
        gap[n]--;
    }
 
    cout << ans << endl;
 
    return 0;
}
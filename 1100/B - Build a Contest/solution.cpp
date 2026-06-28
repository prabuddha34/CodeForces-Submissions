#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> cnt(n + 1, 0);
    int have = 0;
 
    string ans;
 
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
 
        if (cnt[x] == 0) have++;
        cnt[x]++;
 
        if (have == n) {
            ans += '1';
 
            for (int j = 1; j <= n; j++) {
                cnt[j]--;
 
                if (cnt[j] == 0) {
                    have--;
                }
            }
        } else {
            ans += '0';
        }
    }
 
    cout << ans << '
';
 
    return 0;
}
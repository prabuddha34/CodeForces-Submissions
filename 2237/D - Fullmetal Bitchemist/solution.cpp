#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
 
        long long total = 1LL * n * (n + 1) / 2;
 
        long long cnt[3] = {0, 0, 0};
        cnt[0] = 1;
 
        int pref = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') pref += 1;
            else pref -= 1;
 
            int mod = pref % 3;
            if (mod < 0) mod += 3;
 
            cnt[mod]++;
        }
 
        long long bad = 0;
 
        for (int i = 0; i < 3; i++) {
            bad += cnt[i] * (cnt[i] - 1) / 2;
        }
 
        long long ans = total - bad;
 
        long long altBad = 0;
        long long len = 1;
 
        for (int i = 1; i <= n; i++) {
            if (i < n && s[i] != s[i - 1]) {
                len++;
            } else {
                long long oddSub = ((len + 1) / 2) * ((len + 2) / 2);
                altBad += oddSub - len;
                len = 1;
            }
        }
 
        ans -= altBad;
 
        cout << ans << '
';
    }
 
    return 0;
}
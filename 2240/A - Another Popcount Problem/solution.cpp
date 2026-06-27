#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        long long used = min(n, k);
        long long ans = used;
        n -= used;
 
        long long cnt = used;
        long long extra = 2;
 
        while (n >= extra && cnt > 0) {
            long long take = min(cnt, n / extra);
            ans += take;
            n -= take * extra;
            extra *= 2;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
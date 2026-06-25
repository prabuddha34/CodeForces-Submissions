#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> cnt(31, 0);
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            int bit = 0;
            while ((1 << (bit + 1)) <= x) {
                bit++;
            }
 
            cnt[bit]++;
        }
 
        long long ans = 0;
 
        for (int i = 0; i < 31; i++) {
            ans += cnt[i] * (cnt[i] - 1) / 2;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
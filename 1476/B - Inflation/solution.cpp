#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
 
        vector<long long> p(n);
 
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
 
        long long sum = p[0];
        long long ans = 0;
 
        for (int i = 1; i < n; i++) {
            if (p[i] * 100 > k * sum) {
                long long need = (p[i] * 100 + k - 1) / k;
 
                long long add = need - sum;
 
                ans += add;
                sum += add;
            }
 
            sum += p[i];
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
long long binpow(long long a,long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<long long> b(3*n);
        for (int i=0;i<3*n;i++) {
            b[i]=a[i%n];
 
        }
        vector<long long> pref(3 * n + 1, 0);
        for (int i = 0; i < 3 * n; i++) {
            pref[i + 1] = pref[i] + b[i];
        }
        long long ansq=0;
        for (int i = 0; i < n; i++) {
            int idx=i+n;
            long long l_Sum = pref[idx] - pref[idx-d];
            long long r_Sum = pref[idx+d+1] - pref[idx+1];
            long long viewgets=l_Sum + r_Sum;
            long long val=2LL*d*a[i]-viewgets;
            if (val> 0) ansq += val;
        }
        cout << ansq<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
 
int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    vector<long long>pref(n+1,0);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }
    double ans=0.0;
    for (int l = 1; l <= n; l++) {
        for (int r = l + k - 1; r <= n; r++) {
            long long sum = pref[r] - pref[l - 1];
            int len = r - l + 1;
            ans = max(ans, (double)sum / len);
        }
    }
    cout << fixed << setprecision(10) << ans << '
';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n;
    cin >> n;
    vector<int>t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    int ans=-1e9;
    for (int d=1; d<=n; d++) {
        if (n%d!=0)continue;
        int cnt=n/d;
        if (cnt<3)continue;
        for (int start=0;start<d;start++) {
            int sum=0;
            for (int j = start; j < n; j += d) {
                sum += t[j];
            }
            ans=max(ans,sum);
        }
    }
    cout << ans << endl;
    return 0;
}
 
 
 
 
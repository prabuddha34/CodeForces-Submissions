#include <bits/stdc++.h>
using namespace std;
int main() {
int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    vector<pair<double,int>>ans;
    for (int i=1;i<=n;i++) {
        int a, b;
        cin >> a >> b;
 
        double h1 = a * t1 * (100 - k) / 100.0 + b * t2;
        double h2 = b * t1 * (100 - k) / 100.0 + a * t2;
 
        double best = max(h1, h2);
 
        ans.push_back({-best, i});
    }
 
    sort(ans.begin(), ans.end());
     cout<<fixed<<setprecision(2);
    for(int i = 0; i < n; i++) {
        cout << ans[i].second << " " << -ans[i].first << endl;
    }
    return 0;
}
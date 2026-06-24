#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        mp[x]++;
    }
    vector<int> v;
    for (auto p : mp) {
        v.push_back(p.first);
    }
     int ans=0;
    for (int i = 0; i < (int)v.size(); i++) {
        bool canBeEaten = false;
 
        if (i + 1 < (int)v.size() && v[i + 1] <= v[i] + k) {
            canBeEaten = true;
        }
 
        if (!canBeEaten) {
            ans += mp[v[i]];
        }
    }
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,ans=1e9;
    cin>>n;
    map<long long, pair<int,int>> mp;
    for(int i=0;i<n;i++) {
        long long a,b;
        cin>>a>>b;
        mp[a].first++;
        if (a!=b) mp[b].second++;
 
    }
    int need = (n + 1) / 2;
    for (auto [c, p] : mp) {
        int front = p.first;
        int back = p.second;
 
        if (front + back >= need)
            ans = min(ans, max(0, need - front));
    }
 
    cout << (ans == 1e9 ? -1 : ans);
 
 
    return 0;
}
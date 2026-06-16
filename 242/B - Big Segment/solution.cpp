#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin>>n;
    pair<int,int> p[n];
    int mn=1e9;
    int mx=0;
    for(int i=0;i<n;i++) {
        cin>>p[i].first>>p[i].second;
        mn=min(mn,p[i].first);
        mx=max(mx,p[i].second);
 
    }
    for(int i = 0; i < n; i++) {
        if(p[i].first == mn && p[i].second == mx) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
 
 
    return 0;
}
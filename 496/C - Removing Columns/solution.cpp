#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m,ans=0;
    cin>>n>>m;
    vector<string>a(n);
    for(auto &x:a) cin>>x;
    vector<bool> ok(n-1);
 
    for(int j=0;j<m;j++){
        bool bad=0;
        for(int i=0;i<n-1;i++)
            if(!ok[i] && a[i][j]>a[i+1][j]) bad=1;
        if(bad){ ans++; continue; }
        for(int i=0;i<n-1;i++)
            if(a[i][j]<a[i+1][j]) ok[i]=1;
    }
    cout<<ans;
}
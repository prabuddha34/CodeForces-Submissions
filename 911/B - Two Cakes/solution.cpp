#include <bits/stdc++.h>
using namespace std;
int main() {
 
int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    for (int i=1;i<n;i++) {
        int platesA=i;
        int platesB=n-i;
        int x=min(a/platesA,b/platesB);
        ans=max(ans,x);
 
    }
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
double eps=1e-9;
int main() {
int n;
    cin>>n;
    long long ans=n;
    for(int i=1;i<=n;i++) {
        long long a;
        cin>>a;
 
        ans += (a - 1) * i;
    }
    cout<<ans<<endl;
 
    return 0;
}
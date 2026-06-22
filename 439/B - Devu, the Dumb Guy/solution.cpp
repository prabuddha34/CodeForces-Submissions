#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
    long long x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    long long ans=0;
    for (int i=0;i<n;i++) {
        ans+=a[i]*x;
        if (x>1) {
            x--;
        }
 
    }
    cout << ans << endl;
    return 0;
}
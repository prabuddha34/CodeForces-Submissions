#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int q;
        cin>>q;
        int pos=0;
 
        while(q--) {
            int k;
            cin>>k;
            pos=(pos+k)%n;
 
        }
        cout<<a[pos]<<endl;
    }
    return 0;
}
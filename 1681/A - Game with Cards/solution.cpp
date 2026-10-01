#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;cin>>n;
        int maxA=0;
        for (int i=0;i<n;i++) {
            int x;cin>>x;
            maxA=max(maxA,x);
        }
        int m;
        cin>>m;
        int maxB=0;
        for (int i=0;i<m;i++) {
            int x;cin>>x;
            maxB=max(maxB,x);
        }
        if (maxA>=maxB) {
            cout<<"Alice"<<endl;
        }
        else {
            cout<<"Bob"<<endl;
        }
        if (maxB>=maxA) {
            cout<<"Bob"<<endl;
        }
        else {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}
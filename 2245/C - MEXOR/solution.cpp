#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
     int n;
        cin >> n;
        long long k;
        cin >> k;
        long long x1=0;
        for (int i=1;i<=n;i++) {
            x1^=i;
        }
        long long needed=x1^k;
        int left=-1,right=-1;
        if (needed==0) {
            left=0;
            right=0;
        }
        else {
            for (int i=0;i<n;i++) {
                long long j=i^needed;
                if (j<n &&i<j) {
                    left=i;
                    right=(int)j;
                    break;
                }
            }
        }
        if (left==-1) {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if (needed==0) {
            for (int i=0;i<n;i++) {
                cout<<i<<' ';
            }
        }
        else {
            for (int i=0;i<left;i++) {
                cout<<i<<' ';
            }
            cout<<right<<' ';
            for (int i=left;i<right;i++) {
                cout<<i<<' ';
            }
            for (int i=right+1;i<n;i++) {
                cout<<i<<' ';
            }
        }
        
        cout<<endl;
    }
    return 0;
}
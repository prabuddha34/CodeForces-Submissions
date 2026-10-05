#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
       int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
 
        //get the number of the evens and the number of the odds and the value !
        int cntEven=0;
        int cntOdd=0;
        for(int i=0;i<n;i++) {
            if (a[i]%2!=0) {
                cntEven++;
            }
            else {
                cntOdd++;
            }
        }
        cout<<min(cntEven,cntOdd)<<endl;
    }
    return 0;
}
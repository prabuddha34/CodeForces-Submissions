#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n>19) {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
        long long x=1;
        for (int i=0;i<n;i++) {
            cout<<x<<" ";
            x*=3;
        }
        cout<<endl;
    }
 
    return 0;
}
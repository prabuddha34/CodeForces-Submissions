#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
       int n,m;
        cin >> n >> m;
        int sun=0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sun += a[i];
 
        }
        cout<<min(sun,m)<<endl;
 
    }
 
    return 0;
}
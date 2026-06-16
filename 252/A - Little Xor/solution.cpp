#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a[105];
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int ans = 0;
 
    for(int i = 0; i < n; i++) {
        int xr = 0;
 
        for(int j = i; j < n; j++) {
            xr = xr ^ a[j];
            ans = max(ans, xr);
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
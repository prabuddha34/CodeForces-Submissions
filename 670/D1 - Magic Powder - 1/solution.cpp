#include <bits/stdc++.h>
using namespace std;
int main() {
int n,k;
    cin>>n>>k;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    int low = 0, high = 2000;
    int ans = 0;
    while(low <= high) {
        int mid = (low + high)/2;
        int powder = 0;
 
        for (int i = 0; i < n; i++) {
            int need = a[i] * mid;
 
            if (need > b[i]) {
                powder += need - b[i];
            }
        }
 
        if (powder <= k) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
 
    return 0;
}
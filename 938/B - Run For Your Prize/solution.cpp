#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int ans = INT_MAX;
 
    for(int i = 0; i < n - 1; i++) {
        int me = a[i] - 1;
        int frnd = 1000000 - a[i + 1];
 
        ans = min(ans, max(me, frnd));
    }
 
    // all prizes collected by friend
    ans = min(ans, 1000000 - a[0]);
 
    // all prizes collected by me
    ans = min(ans, a[n - 1] - 1);
 
    cout << ans << endl;
 
    return 0;
}
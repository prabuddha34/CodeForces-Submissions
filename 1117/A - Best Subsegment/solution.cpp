#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
 
    long long mx = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
 
    int ans = 0;
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) {
            count++;
            ans = max(ans, count);
        } else {
            count = 0;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
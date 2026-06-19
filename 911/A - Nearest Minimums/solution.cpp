#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    int mn = INT_MAX;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
 
    int last = -1;
    int ans = INT_MAX;
 
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) {
            if (last != -1) {
                ans = min(ans, i - last);
            }
            last = i;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
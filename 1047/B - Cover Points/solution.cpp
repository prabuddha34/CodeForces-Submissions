#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long ans = 0;
 
    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        ans = max(ans, x + y);
    }
 
    cout << ans << '
';
    return 0;
}
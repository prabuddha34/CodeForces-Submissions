#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
 
        long long n, B, x, y;
        cin >> n >> B >> x >> y;
 
        long long cur = 0;
        long long ans = 0;
 
        for (int i = 1; i <= n; i++) {
 
            if (cur + x <= B)
                cur += x;
            else
                cur -= y;
 
            ans += cur;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
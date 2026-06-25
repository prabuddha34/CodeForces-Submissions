#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        if (n % 2 == 0) {
            long long ans = k % n;
            if (ans == 0) ans = n;
            cout << ans << endl;
        } else {
            long long extra = (k - 1) / (n / 2);
            long long ans = (k + extra) % n;
            if (ans == 0) ans = n;
            cout << ans << endl;
        }
    }
 
    return 0;
}
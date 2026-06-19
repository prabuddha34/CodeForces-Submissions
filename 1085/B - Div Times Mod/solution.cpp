#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    int k;
    cin >> n >> k;
 
    long long ans = LLONG_MAX;
 
    for (int r = 1; r < k; r++) {
        if (n % r == 0) {
            long long q = n / r;
            long long x = q * k + r;
 
            ans = min(ans, x);
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
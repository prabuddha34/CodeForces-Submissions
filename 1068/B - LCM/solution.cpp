#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long b;
    cin >> b;
 
    long long ans = 1;
 
    for (long long p = 2; p * p <= b; p++) {
        if (b % p == 0) {
            int cnt = 0;
            while (b % p == 0) {
                b /= p;
                cnt++;
            }
            ans *= (cnt + 1);
        }
    }
 
    if (b > 1) ans *= 2;
 
    cout << ans << '
';
}
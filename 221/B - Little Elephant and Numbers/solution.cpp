#include <bits/stdc++.h>
using namespace std;
 
bool commonDigit(long long a, long long b) {
    bool digit[10] = {};
 
    while (a > 0) {
        digit[a % 10] = true;
        a /= 10;
    }
 
    while (b > 0) {
        if (digit[b % 10]) return true;
        b /= 10;
    }
 
    return false;
}
 
int main() {
    long long x;
    cin >> x;
 
    int ans = 0;
 
    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            long long d1 = i;
            long long d2 = x / i;
 
            if (commonDigit(x, d1)) ans++;
 
            if (d1 != d2 && commonDigit(x, d2)) ans++;
        }
    }
 
    cout << ans;
    return 0;
}
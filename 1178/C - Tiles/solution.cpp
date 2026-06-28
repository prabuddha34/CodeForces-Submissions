#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 998244353;
 
long long binpow(long long a, long long b) {
    long long res = 1;
 
    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
 
    return res;
}
 
int main() {
    long long w, h;
    cin >> w >> h;
 
    cout << binpow(2, w + h) << endl;
 
    return 0;
}
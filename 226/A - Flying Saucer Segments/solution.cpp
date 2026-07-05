#include <bits/stdc++.h>
using namespace std;
 
long long power(long long base, long long exp, long long mod) {
    long long ans = 1;
 
    while (exp > 0) {
        if (exp % 2 == 1) {
            ans = (ans * base) % mod;
        }
 
        base = (base * base) % mod;
        exp = exp / 2;
    }
 
    return ans;
}
 
int main() {
    long long n, m;
    cin >> n >> m;
 
    long long ans = power(3, n, m);
 
    ans = (ans - 1 + m) % m;
 
    cout << ans << endl;
 
    return 0;
}
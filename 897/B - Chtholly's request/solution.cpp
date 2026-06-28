#include <bits/stdc++.h>
using namespace std;
 
long long makePalindrome(long long x) {
    long long res = x;
    long long temp = x;
 
    while (temp > 0) {
        res = res * 10 + temp % 10;
        temp /= 10;
    }
 
    return res;
}
 
int main() {
    long long k, p;
    cin >> k >> p;
 
    long long ans = 0;
 
    for (long long i = 1; i <= k; i++) {
        ans = (ans + makePalindrome(i)) % p;
    }
 
    cout << ans << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
long long fact(int x) {
    long long res = 1;
    for (int i = 1; i <= x; i++) res *= i;
    return res;
}
 
long long C(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}
 
int main() {
    int n;
    cin >> n;
 
    int half = n / 2;
 
    long long ans = C(n, half) * fact(half - 1) * fact(half - 1) / 2;
 
    cout << ans << '
';
 
    return 0;
}
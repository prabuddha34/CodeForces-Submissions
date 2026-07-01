#include <bits/stdc++.h>
using namespace std;
 
void solve(long long n) {
    long long x = n;
 
    long long prime = 0;
    int mx = 0;
 
    for (long long i = 2; i * i <= x; i++) {
        int cnt = 0;
 
        while (x % i == 0) {
            cnt++;
            x /= i;
        }
 
        if (cnt > mx) {
            mx = cnt;
            prime = i;
        }
    }
 
    if (mx == 0) {
        cout << 1 << "
";
        cout << n << "
";
        return;
    }
 
    cout << mx << "
";
 
    long long last = n;
    for (int i = 1; i < mx; i++) {
        cout << prime << " ";
        last /= prime;
    }
 
    cout << last << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
        solve(n);
    }
 
    return 0;
}
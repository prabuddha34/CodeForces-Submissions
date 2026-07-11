#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    for (long long &x : a)
        cin >> x;
 
    const long long MOD = 1000000;
    vector<array<long long, 3>> operations;
 
    long long added = 0;
 
    for (int i = n - 1; i >= 0; i--) {
        long long current = (a[i] + added) % MOD;
 
        long long x = (i - current + MOD) % MOD;
 
        operations.push_back({1, i + 1, x});
        added = (added + x) % MOD;
    }
 
   
    operations.push_back({2, n, MOD});
 
    cout << operations.size() << '
';
 
    for (auto operation : operations) {
        cout << operation[0] << ' '
             << operation[1] << ' '
             << operation[2] << '
';
    }
 
    return 0;
}
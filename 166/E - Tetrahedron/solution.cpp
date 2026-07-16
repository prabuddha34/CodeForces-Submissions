#include <bits/stdc++.h>
using namespace std;
 
int main() {
    const long long mod = 1000000007;
 
    int n;
    cin >> n;
 
    long long d = 1, o = 0;
 
    for (int i = 1; i <= n; i++) {
        long long nd = 3 * o % mod;
        long long no = (d + 2 * o) % mod;
 
        d = nd;
        o = no;
    }
 
    cout << d;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
 
    long long base = n / m;
    long long extra = n % m;
 
    long long kmin = extra * (base + 1) * base / 2
                  + (m - extra) * base * (base - 1) / 2;
 
    long long big = n - m + 1;
    long long kmax = big * (big - 1) / 2;
 
    cout << kmin << " " << kmax << '
';
 
    return 0;
}
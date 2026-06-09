#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    long long ans = n * (n + 1) * (n - 1) / 6 + n;
 
    cout << ans << '
';
    return 0;
}
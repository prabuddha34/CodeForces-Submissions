#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long double n;
    long long t;
 
    cin >> n >> t;
 
    long double ans = n * pow((long double)1.000000011, t);
 
    cout << fixed << setprecision(30) << ans << '
';
 
    return 0;
}
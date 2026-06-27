#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 1000000007;
 
int main() {
    long long x, y, n;
    cin >> x >> y;
    cin >> n;
 
    long long arr[6];
 
    arr[0] = x;
    arr[1] = y;
    arr[2] = y - x;
    arr[3] = -x;
    arr[4] = -y;
    arr[5] = x - y;
 
    long long ans = arr[(n - 1) % 6];
 
    ans = (ans % MOD + MOD) % MOD;
 
    cout << ans << '
';
 
    return 0;
}
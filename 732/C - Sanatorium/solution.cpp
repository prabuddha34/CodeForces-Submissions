#include <bits/stdc++.h>
using namespace std;
const int MOD = 10007;
int main() {
    long long b,d,s;
    cin>>b>>d>>s;
    long long mx=max({b,d,s});
    long long ans = 0;
 
    ans += max(0LL, mx - b - 1);
    ans += max(0LL, mx - d - 1);
    ans += max(0LL, mx - s - 1);
 
    cout << ans << endl;
 
    return 0;
}
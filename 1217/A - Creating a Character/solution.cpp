#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        long long str, intel, exp;
        cin >> str >> intel >> exp;
 
        long long d = intel + exp - str;
 
        long long minX;
        if (d < 0) minX = 0;
        else minX = d / 2 + 1;
 
        long long ans = exp - minX + 1;
        if (ans < 0) ans = 0;
 
        cout << ans << '
';
    }
 
    return 0;
}
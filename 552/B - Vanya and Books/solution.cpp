#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    long long ans = 0;
    long long start = 1;
 
    for (int digits = 1; start <= n; digits++) {
        long long end = start * 10 - 1;
        long long upto = min(n, end);
 
        ans += (upto - start + 1) * digits;
 
        start *= 10;
    }
 
    cout << ans << endl;
 
    return 0;
}
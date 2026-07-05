#include <bits/stdc++.h>
using namespace std;
 
int trailing9(long long x) {
    int count = 0;
 
    while (x > 0 && x % 10 == 9) {
        count++;
        x = x / 10;
    }
 
    return count;
}
 
int main() {
    long long p, d;
    cin >> p >> d;
 
    long long ans = p;
    int best = trailing9(p);
 
    long long power = 10;
 
    while (power <= 1000000000000000000LL) {
        long long candidate = (p / power) * power - 1;
 
        if (candidate <= 0) break;
 
        if (p - candidate <= d) {
            int cnt = trailing9(candidate);
 
            if (cnt > best || (cnt == best && candidate > ans)) {
                best = cnt;
                ans = candidate;
            }
        }
 
        if (power > 100000000000000000LL) break;
        power = power * 10;
    }
 
    cout << ans << endl;
 
    return 0;
}
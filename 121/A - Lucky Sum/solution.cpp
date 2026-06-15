#include <bits/stdc++.h>
using namespace std;
 
vector<long long> lucky;
 
void generate(long long x) {
    if (x > 10000000000LL) return;
 
    if (x > 0) lucky.push_back(x);
 
    generate(x * 10 + 4);
    generate(x * 10 + 7);
}
 
int main() {
    long long l, r;
    cin >> l >> r;
 
    generate(0);
    sort(lucky.begin(), lucky.end());
 
    long long ans = 0;
    long long cur = l;
 
    for (long long x : lucky) {
        if (cur > r) break;
 
        if (x >= cur) {
            long long end = min(r, x);
            ans += (end - cur + 1) * x;
            cur = end + 1;
        }
    }
 
    cout << ans;
 
    return 0;
}
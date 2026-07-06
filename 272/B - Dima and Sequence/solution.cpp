#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long cnt[40] = {0};
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        int ones = __builtin_popcount(x);
        cnt[ones]++;
    }
 
    long long ans = 0;
 
    for (int i = 0; i < 40; i++) {
        ans += cnt[i] * (cnt[i] - 1) / 2;
    }
 
    cout << ans << endl;
 
    return 0;
}
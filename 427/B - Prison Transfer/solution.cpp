#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, c;
    long long t;
    cin >> n >> t >> c;
 
    int safe = 0;
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
 
        if (x <= t) {
            safe++;
 
            if (safe >= c) {
                ans++;
            }
        } else {
            safe = 0;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
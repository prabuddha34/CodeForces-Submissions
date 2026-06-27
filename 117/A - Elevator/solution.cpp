#include <bits/stdc++.h>
using namespace std;
 
long long nextTime(long long start, long long t, long long cycle) {
    if (start >= t) return start;
 
    long long k = (t - start + cycle - 1) / cycle;
    return start + k * cycle;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    long long m;
    cin >> n >> m;
 
    long long cycle = 2 * (m - 1);
 
    while (n--) {
        long long s, f, t;
        cin >> s >> f >> t;
 
        if (s == f) {
            cout << t << '
';
            continue;
        }
 
        long long ans = LLONG_MAX;
 
        // take elevator when it reaches s while going up
        long long upStart = s - 1;
        long long pickupUp = nextTime(upStart, t, cycle);
 
        if (f > s) {
            ans = min(ans, pickupUp + (f - s));
        } else {
            // goes up to m, then down to f
            ans = min(ans, pickupUp + (m - s) + (m - f));
        }
 
        // take elevator when it reaches s while going down
        long long downStart = cycle - (s - 1);
        long long pickupDown = nextTime(downStart, t, cycle);
 
        if (f < s) {
            ans = min(ans, pickupDown + (s - f));
        } else {
            // goes down to 1, then up to f
            ans = min(ans, pickupDown + (s - 1) + (f - 1));
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
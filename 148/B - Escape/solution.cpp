#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;
 
    if (vd <= vp) {
        cout << 0;
        return 0;
    }
 
    double time = t;
    int ans = 0;
 
    while (true) {
        double princessDist = vp * time;
 
        double catchTime = princessDist / (vd - vp);
 
        time += catchTime;
 
        if (vp * time >= c)
            break;
 
        ans++;
 
        double catchDist = vp * time;
 
        time += catchDist / vd + f;
    }
 
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long r, x, y, xp, yp;
    cin >> r >> x >> y >> xp >> yp;
 
    long long dx = x - xp;
    long long dy = y - yp;
 
    double dist = sqrt(dx * dx + dy * dy);
 
    int ans = ceil(dist / (2.0 * r));
 
    cout << ans << endl;
 
    return 0;
}
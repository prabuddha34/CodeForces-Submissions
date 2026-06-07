#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int r, g, b;
    cin >> r >> g >> b;
 
    int redTrips = (r + 1) / 2;
    int greenTrips = (g + 1) / 2;
    int blueTrips = (b + 1) / 2;
 
    int ans = 0;
 
    if (redTrips)
        ans = max(ans, (redTrips - 1) * 3 + 30);
 
    if (greenTrips)
        ans = max(ans, 1 + (greenTrips - 1) * 3 + 30);
 
    if (blueTrips)
        ans = max(ans, 2 + (blueTrips - 1) * 3 + 30);
 
    cout << ans << '
';
    return 0;
}
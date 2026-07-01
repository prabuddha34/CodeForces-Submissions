#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        double W, H;
        cin >> W >> H;
 
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
 
        double w, h;
        cin >> w >> h;
 
        double ans = 1e18;
 
        double tableW = x2 - x1;
        double tableH = y2 - y1;
 
        // put new table on left or right side
        if (tableW + w <= W) {
            ans = min(ans, max(0.0, w - x1));       // need space on left
            ans = min(ans, max(0.0, x2 - (W - w))); // need space on right
        }
 
        // put new table on bottom or top side
        if (tableH + h <= H) {
            ans = min(ans, max(0.0, h - y1));       // need space at bottom
            ans = min(ans, max(0.0, y2 - (H - h))); // need space at top
        }
 
        if (ans == 1e18) {
            cout << -1 << "
";
        } else {
            cout << fixed << setprecision(9) << ans << "
";
        }
    }
 
    return 0;
}
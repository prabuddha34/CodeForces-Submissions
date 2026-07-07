#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x0, y0;
    cin >> n >> x0 >> y0;
 
    set<pair<int, int>> directions;
 
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
 
        int dx = x - x0;
        int dy = y - y0;
 
        int g = __gcd(abs(dx), abs(dy));
 
        dx /= g;
        dy /= g;
 
        // same line opposite directions should count same
        if (dx < 0) {
            dx = -dx;
            dy = -dy;
        }
        if (dx == 0 && dy < 0) {
            dy = -dy;
        }
 
        directions.insert({dx, dy});
    }
 
    cout << directions.size() << endl;
    return 0;
}
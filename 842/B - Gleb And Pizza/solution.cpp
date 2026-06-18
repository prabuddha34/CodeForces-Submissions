#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int r, d;
    cin >> r >> d;
 
    int n;
    cin >> n;
 
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        int x, y, ri;
        cin >> x >> y >> ri;
 
        double dist = sqrt(x * x + y * y);
 
        if (dist - ri >= r - d && dist + ri <= r) {
            ans++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
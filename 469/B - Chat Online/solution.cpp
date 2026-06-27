#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int p, q, l, r;
    cin >> p >> q >> l >> r;
 
    vector<pair<int, int>> z(p), x(q);
 
    for (int i = 0; i < p; i++) {
        cin >> z[i].first >> z[i].second;
    }
 
    for (int i = 0; i < q; i++) {
        cin >> x[i].first >> x[i].second;
    }
 
    int ans = 0;
 
    for (int t = l; t <= r; t++) {
        bool canChat = false;
 
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                int xStart = x[j].first + t;
                int xEnd = x[j].second + t;
 
                int zStart = z[i].first;
                int zEnd = z[i].second;
 
                if (max(xStart, zStart) <= min(xEnd, zEnd)) {
                    canChat = true;
                }
            }
        }
 
        if (canChat) {
            ans++;
        }
    }
 
    cout << ans << '
';
 
    return 0;
}
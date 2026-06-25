#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    cout << fixed << setprecision(15);
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long double> mines;
        vector<long double> miners;
 
        for (int i = 0; i < 2 * n; i++) {
            long long x, y;
            cin >> x >> y;
 
            if (x == 0) {
                miners.push_back(abs(y));
            } else {
                mines.push_back(abs(x));
            }
        }
 
        sort(mines.begin(), mines.end());
        sort(miners.begin(), miners.end());
 
        long double ans = 0;
 
        for (int i = 0; i < n; i++) {
            ans += sqrt(mines[i] * mines[i] + miners[i] * miners[i]);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
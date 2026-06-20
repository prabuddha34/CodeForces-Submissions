#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
 
        vector<int> h(n);
 
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
 
        int ans = -1;
 
        for (int stone = 1; stone <= k && stone <= 10000; stone++) {
            bool stop = false;
 
            for (int i = 0; i < n - 1; i++) {
                if (h[i] < h[i + 1]) {
                    h[i]++;
                    ans = i + 1;
                    stop = true;
                    break;
                }
            }
 
            if (!stop) {
                ans = -1;
                break;
            }
        }
 
        if (k > 10000) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
 
    return 0;
}
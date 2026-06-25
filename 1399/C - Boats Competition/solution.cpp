#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> freq(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            freq[w]++;
        }
 
        int ans = 0;
 
        for (int sum = 2; sum <= 2 * n; sum++) {
            int teams = 0;
 
            for (int w = 1; w <= n; w++) {
                int need = sum - w;
 
                if (need < 1 || need > n) continue;
 
                if (w < need) {
                    teams += min(freq[w], freq[need]);
                } 
                else if (w == need) {
                    teams += freq[w] / 2;
                }
            }
 
            ans = max(ans, teams);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
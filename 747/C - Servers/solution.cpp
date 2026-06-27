#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, q;
    cin >> n >> q;
 
    vector<int> busyUntil(n + 1, 0);
 
    while (q--) {
        int t, k, d;
        cin >> t >> k >> d;
 
        vector<int> chosen;
 
        for (int id = 1; id <= n; id++) {
            if (busyUntil[id] < t) {
                chosen.push_back(id);
            }
 
            if ((int)chosen.size() == k) break;
        }
 
        if ((int)chosen.size() < k) {
            cout << -1 << endl;
        } 
        else {
            int sum = 0;
 
            for (int id : chosen) {
                sum += id;
                busyUntil[id] = t + d - 1;
            }
 
            cout << sum << endl;
        }
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int total = n + m;
 
    vector<long long> x(total);
    vector<int> t(total);
 
    for (int i = 0; i < total; i++) cin >> x[i];
    for (int i = 0; i < total; i++) cin >> t[i];
 
    vector<long long> taxi;
 
    for (int i = 0; i < total; i++) {
        if (t[i] == 1) {
            taxi.push_back(x[i]);
        }
    }
 
    vector<int> ans(m, 0);
 
    for (int i = 0; i < total; i++) {
        if (t[i] == 0) {
            long long rider = x[i];
 
            int pos = lower_bound(taxi.begin(), taxi.end(), rider) - taxi.begin();
 
            int chosen;
 
            if (pos == 0) {
                chosen = 0;
            }
            else if (pos == m) {
                chosen = m - 1;
            }
            else {
                long long rightDist = taxi[pos] - rider;
                long long leftDist = rider - taxi[pos - 1];
 
                if (leftDist <= rightDist) {
                    chosen = pos - 1;
                } else {
                    chosen = pos;
                }
            }
 
            ans[chosen]++;
        }
    }
 
    for (int i = 0; i < m; i++) {
        cout << ans[i] << " ";
    }
 
    return 0;
}
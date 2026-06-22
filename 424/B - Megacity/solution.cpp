#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long s;
    cin >> n >> s;
 
    vector<pair<double, int>> v;
 
    for (int i = 0; i < n; i++) {
        int x, y, k;
        cin >> x >> y >> k;
 
        double dist = sqrt(1.0 * x * x + 1.0 * y * y);
        v.push_back({dist, k});
    }
 
    sort(v.begin(), v.end());
 
    for (int i = 0; i < n; i++) {
        s += v[i].second;
 
        if (s >= 1000000) {
            cout << fixed << setprecision(10) << v[i].first << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
 
    return 0;
}
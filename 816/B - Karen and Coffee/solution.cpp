#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k, q;
    cin >> n >> k >> q;
 
    const int maxTemp = 200000;
 
    vector<int> diff(maxTemp + 2, 0);
    vector<int> good(maxTemp + 2, 0);
 
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
 
        diff[l]++;
        diff[r + 1]--;
    }
 
    for (int i = 1; i <= maxTemp; i++) {
        diff[i] += diff[i - 1];
    }
 
    for (int i = 1; i <= maxTemp; i++) {
        good[i] = good[i - 1];
 
        if (diff[i] >= k) {
            good[i]++;
        }
    }
 
    while (q--) {
        int a, b;
        cin >> a >> b;
 
        cout << good[b] - good[a - 1] << '
';
    }
 
    return 0;
}
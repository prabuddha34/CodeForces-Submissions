#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a1(n), a2(n), b(n + 1);
 
    for (int i = 1; i <= n - 1; i++) cin >> a1[i];
    for (int i = 1; i <= n - 1; i++) cin >> a2[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
 
    vector<int> cost(n + 1, 0);
 
    for (int j = 1; j <= n; j++) {
        int total = b[j];
 
        // row 1: from column j to 1
        for (int k = 1; k < j; k++) {
            total += a1[k];
        }
 
        // row 2: from column n to j
        for (int k = j; k < n; k++) {
            total += a2[k];
        }
 
        cost[j] = total;
    }
 
    int ans = INT_MAX;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                ans = min(ans, cost[i] + cost[j]);
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
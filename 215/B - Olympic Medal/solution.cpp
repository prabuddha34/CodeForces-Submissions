#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, k;
    double r1, p1, p2;
    
    cin >> n;
    double maxR = 0;
    for (int i = 0; i < n; i++) {
        cin >> r1;
        maxR = max(maxR, r1);
    }
 
    cin >> m;
    double maxP1 = 0;
    for (int i = 0; i < m; i++) {
        cin >> p1;
        maxP1 = max(maxP1, p1);
    }
 
    cin >> k;
    double minP2 = 1e18;
    for (int i = 0; i < k; i++) {
        cin >> p2;
        minP2 = min(minP2, p2);
    }
 
    double A, B;
    cin >> A >> B;
 
    double ans = maxR * sqrt((B * maxP1) / (A * minP2 + B * maxP1));
 
    cout << fixed << setprecision(10) << ans;
 
    return 0;
}
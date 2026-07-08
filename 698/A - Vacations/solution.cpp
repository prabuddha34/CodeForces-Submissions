#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int dp[105][3];
 
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            dp[i][j] = 1e9;
        }
    }
 
    dp[0][0] = dp[0][1] = dp[0][2] = 0;
 
    for (int day = 0; day < n; day++) {
        for (int last = 0; last < 3; last++) {
 
          
            dp[day + 1][0] = min(dp[day + 1][0], dp[day][last] + 1);
 
            if ((a[day] == 1 || a[day] == 3) && last != 1) {
                dp[day + 1][1] = min(dp[day + 1][1], dp[day][last]);
            }
 
         
            if ((a[day] == 2 || a[day] == 3) && last != 2) {
                dp[day + 1][2] = min(dp[day + 1][2], dp[day][last]);
            }
        }
    }
 
    cout << min({dp[n][0], dp[n][1], dp[n][2]}) << endl;
 
    return 0;
}
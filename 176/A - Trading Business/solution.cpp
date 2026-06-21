#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<string> name(n);
    vector<vector<int>> buy(n, vector<int>(m));
    vector<vector<int>> sell(n, vector<int>(m));
    vector<vector<int>> cnt(n, vector<int>(m));
 
    for(int i = 0; i < n; i++) {
        cin >> name[i];
 
        for(int j = 0; j < m; j++) {
            cin >> buy[i][j] >> sell[i][j] >> cnt[i][j];
        }
    }
 
    int ans = 0;
 
    for(int b = 0; b < n; b++) {
        for(int s = 0; s < n; s++) {
            if(b == s) continue;
 
            vector<int> dp(k + 1, 0);
 
            for(int item = 0; item < m; item++) {
                int profit = sell[s][item] - buy[b][item];
 
                if(profit <= 0) continue;
 
                for(int t = 0; t < cnt[b][item]; t++) {
                    for(int cap = k; cap >= 1; cap--) {
                        dp[cap] = max(dp[cap], dp[cap - 1] + profit);
                    }
                }
            }
 
            ans = max(ans, dp[k]);
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
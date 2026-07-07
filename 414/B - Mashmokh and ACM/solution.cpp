#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1000000007;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));
 
    // sequences of length 1
    for (int x = 1; x <= n; x++) {
        dp[1][x] = 1;
    }
 
    // build sequences from length 1 to k
    for (int len = 1; len < k; len++) {
        for (int x = 1; x <= n; x++) {
            if (dp[len][x] == 0) continue;
 
            // next number must be a multiple of x
            for (int multiple = x; multiple <= n; multiple += x) {
                dp[len + 1][multiple] += dp[len][x];
 
                if (dp[len + 1][multiple] >= MOD) {
                    dp[len + 1][multiple] -= MOD;
                }
            }
        }
    }
 
    int ans = 0;
 
    for (int x = 1; x <= n; x++) {
        ans += dp[k][x];
 
        if (ans >= MOD) {
            ans -= MOD;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
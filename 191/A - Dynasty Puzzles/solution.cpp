#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    long long dp[26][26] = {};
    long long ans = 0;
 
    while (n--) {
        string s;
        cin >> s;
 
        int a = s.front() - 'a';
        int b = s.back() - 'a';
        int len = s.size();
 
        long long old[26];
 
 
        for (int i = 0; i < 26; i++)
            old[i] = dp[i][a];
 
        dp[a][b] = max(dp[a][b], (long long)len);
 
 
        for (int i = 0; i < 26; i++) {
            if (old[i] > 0)
                dp[i][b] = max(dp[i][b], old[i] + len);
        }
 
        for (int i = 0; i < 26; i++)
            ans = max(ans, dp[i][i]);
    }
 
    cout << ans;
 
    return 0;
}
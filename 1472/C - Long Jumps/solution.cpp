#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n + 1), dp(n + 1);
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
        long long answer = 0;
 
        for (int i = n; i >= 1; i--) {
            dp[i] = a[i];
 
            int next = i + a[i];
 
            if (next <= n) {
                dp[i] += dp[next];
            }
 
            answer = max(answer, dp[i]);
        }
 
        cout << answer << endl;
    }
}
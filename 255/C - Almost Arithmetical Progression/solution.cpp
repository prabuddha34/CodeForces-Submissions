#include <bits/stdc++.h>
using namespace std;
 
short dp[4005][4005];
int lastPos[1000005];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int &x : a)
        cin >> x;
 
    fill(lastPos, lastPos + 1000005, -1);
 
    int ans = 1;
 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = lastPos[a[j]];
 
            if (k == -1)
                dp[i][j] = 2;
            else
                dp[i][j] = dp[k][i] + 1;
 
            ans = max(ans, (int)dp[i][j]);
        }
 
        lastPos[a[i]] = i;
    }
 
    cout << ans;
}
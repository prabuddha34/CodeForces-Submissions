#include <bits/stdc++.h>
using namespace std;
 
int n;
int a[1005];
 
bool canWalk(int day) {
    if (a[1] < day || a[n] < day) return false;
 
    bool dp[1005] = {false};
    dp[1] = true;
 
    for (int i = 1; i <= n; i++) {
        if (!dp[i]) continue;
 
        if (i + 1 <= n && a[i + 1] >= day) {
            dp[i + 1] = true;
        }
 
        if (i + 2 <= n && a[i + 2] >= day) {
            dp[i + 2] = true;
        }
    }
 
    return dp[n];
}
 
int main() {
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    int low = 1, high = 1000, ans = 0;
 
    while (low <= high) {
        int mid = (low + high) / 2;
 
        if (canWalk(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
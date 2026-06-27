#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
 
    vector<long long> chatMsg(m + 1, 0);
    vector<long long> sentByEmployee(n + 1, 0);
 
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
 
        chatMsg[y]++;
        sentByEmployee[x]++;
    }
 
    for (int i = 1; i <= n; i++) {
        long long ans = 0;
 
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                ans += chatMsg[j];
            }
        }
 
        ans -= sentByEmployee[i];
 
        cout << ans << " ";
    }
 
    return 0;
}
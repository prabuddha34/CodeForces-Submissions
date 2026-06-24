#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<vector<int>> pos(n + 1);
 
    for (int i = 1; i <= 2 * n; i++) {
        int x;
        cin >> x;
        pos[x].push_back(i);
    }
 
    long long ans = 0;
 
    int p1 = 1, p2 = 1;
 
    for (int i = 1; i <= n; i++) {
        int x = pos[i][0];
        int y = pos[i][1];
 
        long long cost1 = abs(p1 - x) + abs(p2 - y);
        long long cost2 = abs(p1 - y) + abs(p2 - x);
 
        ans += min(cost1, cost2);
 
        p1 = x;
        p2 = y;
    }
 
    cout << ans << endl;
 
    return 0;
}
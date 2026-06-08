#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int cnt[24][60] = {0};
 
    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        cnt[h][m]++;
    }
 
    int ans = 0;
 
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 60; j++) {
            ans = max(ans, cnt[i][j]);
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
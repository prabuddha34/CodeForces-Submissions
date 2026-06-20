#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> a(n, vector<int>(m));
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
 
    int x, y;
    cin >> x >> y;
 
    int ans = INT_MAX;
 
    // rectangle x × y
    if(x <= n && y <= m) {
        for(int i = 0; i + x <= n; i++) {
            for(int j = 0; j + y <= m; j++) {
 
                int cnt = 0;
 
                for(int r = i; r < i + x; r++) {
                    for(int c = j; c < j + y; c++) {
                        cnt += a[r][c];
                    }
                }
 
                ans = min(ans, cnt);
            }
        }
    }
 
    // rectangle y × x
    if(y <= n && x <= m) {
        for(int i = 0; i + y <= n; i++) {
            for(int j = 0; j + x <= m; j++) {
 
                int cnt = 0;
 
                for(int r = i; r < i + y; r++) {
                    for(int c = j; c < j + x; c++) {
                        cnt += a[r][c];
                    }
                }
 
                ans = min(ans, cnt);
            }
        }
    }
 
    cout << ans << endl;
}
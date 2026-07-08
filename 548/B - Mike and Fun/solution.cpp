#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m, q;
    cin >> n >> m >> q;
 
    int a[505][505];
    int rowBest[505];
 
    for (int i = 0; i < n; i++) {
        rowBest[i] = 0;
 
        int current = 0;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
 
            if (a[i][j] == 1) {
                current++;
                rowBest[i] = max(rowBest[i], current);
            } else {
                current = 0;
            }
        }
    }
 
    while (q--) {
        int x, y;
        cin >> x >> y;
 
        x--;
        y--;
 
        a[x][y] = 1 - a[x][y];
 
        rowBest[x] = 0;
        int current = 0;
 
        for (int j = 0; j < m; j++) {
            if (a[x][j] == 1) {
                current++;
                rowBest[x] = max(rowBest[x], current);
            } else {
                current = 0;
            }
        }
 
        int answer = 0;
        for (int i = 0; i < n; i++) {
            answer = max(answer, rowBest[i]);
        }
 
        cout << answer << '
';
    }
 
    return 0;
}
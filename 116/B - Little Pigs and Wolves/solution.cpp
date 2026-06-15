#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    char a[15][15];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
 
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
 
            if (a[i][j] == 'W') {
 
                if (i > 0 && a[i - 1][j] == 'P') {
                    ans++;
                    a[i - 1][j] = '.';
                }
                else if (i < n - 1 && a[i + 1][j] == 'P') {
                    ans++;
                    a[i + 1][j] = '.';
                }
                else if (j > 0 && a[i][j - 1] == 'P') {
                    ans++;
                    a[i][j - 1] = '.';
                }
                else if (j < m - 1 && a[i][j + 1] == 'P') {
                    ans++;
                    a[i][j + 1] = '.';
                }
            }
        }
    }
 
    cout << ans;
 
    return 0;
}
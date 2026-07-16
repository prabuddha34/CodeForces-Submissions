#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<string> s(n);
 
    for (int i = 0; i < n; i++) cin >> s[i];
 
    int l = -1;
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (s[i][j] == 'W') l = i;
 
    if (l == -1) {
        cout << 0;
        return 0;
    }
 
    int c = 0, ans = 0;
 
    for (int i = 0; i <= l; i++) {
 
        if (i % 2 == 0) {
            int x = c;
            for (int j = 0; j < m; j++) {
                if (s[i][j] == 'W') x = max(x, j);
                if (i < l && s[i + 1][j] == 'W') x = max(x, j);
            }
            ans += x - c;
            c = x;
        } else {
            int x = c;
            for (int j = 0; j < m; j++) {
                if (s[i][j] == 'W') x = min(x, j);
                if (i < l && s[i + 1][j] == 'W') x = min(x, j);
            }
            ans += c - x;
            c = x;
        }
 
        if (i != l) ans++;
    }
 
    cout << ans;
}
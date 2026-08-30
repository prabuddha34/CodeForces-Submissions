#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int m = 2 * n;
 
    int red = 0;
    int blue = 0;
 
    for (int i = 0; i < m; i++) {
        if (s[i] == '0')
            continue;
 
        int nxt = (i + 1) % m;
 
        if (s[nxt] == '0') {
         
            if (i % 2 == 0)
                red++;
            else
                blue++;
        }
        else {
           
 
            if (i % 2 == 0)
                blue++;
            else
                red++;
        }
    }
 
    cout << red << ' ' << blue << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b;
    cin >> n >> a >> b;
 
    int dem = (n + 1) / 2;
    int rep = n / 2;
 
    int black = (a * b + 1) / 2;
 
    if (max(dem, rep) > black) {
        cout << -1 << '
';
        return 0;
    }
 
    int ans[105][105] = {};
 
    int odd = 1;
    int even = 2;
 
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if ((i + j) % 2 == 0) {
                if (odd <= n) {
                    ans[i][j] = odd;
                    odd += 2;
                }
            }
        }
    }
 
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if ((i + j) % 2 == 1) {
                if (even <= n) {
                    ans[i][j] = even;
                    even += 2;
                }
            }
        }
    }
 
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << ans[i][j] << " ";
        }
        cout << '
';
    }
 
    return 0;
}
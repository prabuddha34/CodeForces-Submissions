#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> banned(n + 1, 0);
 
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        banned[a] = 1;
        banned[b] = 1;
    }
 
    int center = 1;
    for (int i = 1; i <= n; i++) {
        if (!banned[i]) {
            center = i;
            break;
        }
    }
 
    cout << n - 1 << '
';
 
    for (int i = 1; i <= n; i++) {
        if (i != center) {
            cout << center << " " << i << '
';
        }
    }
 
    return 0;
}
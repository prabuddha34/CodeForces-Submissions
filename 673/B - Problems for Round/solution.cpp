#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int L = 1;
    int R = n;
 
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
 
        if (u > v) swap(u, v);
 
        L = max(L, u);
        R = min(R, v);
    }
 
    cout << max(0, R - L) << '
';
 
    return 0;
}
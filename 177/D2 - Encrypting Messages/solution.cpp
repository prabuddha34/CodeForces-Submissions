#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m, c;
    cin >> n >> m >> c;
 
    vector<int> a(n), b(m), p(m + 1);
 
    for (int &x : a) cin >> x;
 
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        p[i + 1] = (p[i] + b[i]) % c;
    }
 
    for (int i = 0; i < n; i++) {
        int l = max(0, i - (n - m));
        int r = min(m - 1, i);
 
        int s = (p[r + 1] - p[l] + c) % c;
        cout << (a[i] + s) % c << " ";
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n,m,r,c;
        cin >> n >> m >> r >> c;
        long long a = r + c - 2; long long b = r + m - c - 1; long long d = n - r + c - 1; long long e = n - r + m - c;
        cout << max({a, b, d, e}) << endl;
    }
 
    return 0;
}
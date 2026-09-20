#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;
 
        long long row = (x - 1) % n;
        long long col = (x - 1) / n;
 
        long long ans = row * m + col + 1;
 
        cout << ans << endl;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
using int64 = long long;
 
int64 nCr(int n, int r) {
    if (r > n) return 0;
    if (r > n - r) r = n - r;
 
    int64 ans = 1;
    for (int i = 1; i <= r; i++) {
        ans = ans * (n - r + i) / i;
    }
    return ans;
}
 
int main() {
    int n;
    cin >> n;
 
    cout << nCr(n, 5) + nCr(n, 6) + nCr(n, 7);
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k;
    cin >> n >> k;
 
    if (n < 3 * k) {
        cout << -1;
        return 0;
    }
 
    vector<int> a(n + 1);
    int p = 1, g = 1;
 
    if (k % 2) {
        a[1] = a[2] = a[4] = 1;
        a[3] = a[5] = a[8] = 2;
        a[6] = a[7] = a[9] = 3;
 
        p = 10;
        g = 4;
    }
 
    while (g <= k) {
        a[p] = a[p + 1] = a[p + 3] = g;
        a[p + 2] = a[p + 4] = a[p + 5] = g + 1;
 
        p += 6;
        g += 2;
    }
 
   
    while (p <= n)
        a[p++] = 1;
 
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
}
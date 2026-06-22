#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    if (k == n) {
        cout << -1 << endl;
        return 0;
    }
 
    int bad = n - k;
 
    vector<int> p(n + 1);
 
    for (int i = 1; i < bad; i++) {
        p[i] = i + 1;
    }
 
    p[bad] = 1;
 
    for (int i = bad + 1; i <= n; i++) {
        p[i] = i;
    }
 
    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
 
    return 0;
}
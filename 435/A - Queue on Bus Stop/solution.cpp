#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int buses = 1;
    int cur = 0;
 
    for (int i = 0; i < n; i++) {
        if (cur + a[i] <= m) {
            cur += a[i];
        } else {
            buses++;
            cur = a[i];
        }
    }
 
    cout << buses << endl;
 
    return 0;
}
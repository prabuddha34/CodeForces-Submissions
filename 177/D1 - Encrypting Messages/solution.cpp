#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, c;
    cin >> n >> m >> c;
 
    vector<int> a(n), b(m);
 
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
 
    vector<int> diff(n + 1, 0);
 
    for(int j = 0; j < m; j++) {
        int l = j;
        int r = j + (n - m);
 
        diff[l] += b[j];
        diff[r + 1] -= b[j];
    }
 
    int cur = 0;
 
    for(int i = 0; i < n; i++) {
        cur += diff[i];
        a[i] = (a[i] + cur) % c;
    }
 
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
 
    cout << endl;
 
    return 0;
}
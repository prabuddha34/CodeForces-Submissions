#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, k;
    cin >> n >> m >> k;
 
    int a[55];
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    sort(a, a + n, greater<int>());
 
    int sockets = k;
 
    if(sockets >= m) {
        cout << 0;
        return 0;
    }
 
    for(int i = 0; i < n; i++) {
        sockets += a[i] - 1;
 
        if(sockets >= m) {
            cout << i + 1;
            return 0;
        }
    }
 
    cout << -1;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x0;
    cin >> n >> x0;
 
    int l = 0;
    int r = 1000;
 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
 
        if (a > b) swap(a, b);
 
        l = max(l, a);
        r = min(r, b);
    }
 
    if (l > r) {
        cout << -1 << endl;
    }
    else if (x0 < l) {
        cout << l - x0 << endl;
    }
    else if (x0 > r) {
        cout << x0 - r << endl;
    }
    else {
        cout << 0 << endl;
    }
 
    return 0;
}
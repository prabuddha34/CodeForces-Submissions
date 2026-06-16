#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x;
    cin >> n;
    cin >> x;
 
    bool ok = true;
 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
 
        if (x == a || x == b || x == 7 - a || x == 7 - b) {
            ok = false;
        }
 
        x = 7 - x;
    }
 
    if (ok) cout << "YES";
    else cout << "NO";
 
    return 0;
}
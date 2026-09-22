#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int xa, ya, xb, yb, xf, yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
 
        int ans = abs(xa - xb) + abs(ya - yb);
 
        if (ya == yb && yf == ya &&
            xf > min(xa, xb) && xf < max(xa, xb)) {
            ans += 2;
        }
 
        if (xa == xb && xf == xa &&
            yf > min(ya, yb) && yf < max(ya, yb)) {
            ans += 2;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
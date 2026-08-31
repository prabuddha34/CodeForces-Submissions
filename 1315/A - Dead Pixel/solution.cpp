#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
 
        int p1 = x * b;
        int p2 = (a - x - 1) * b;
        int p3 = y * a;
        int p4 = (b - y - 1) * a;
 
        int ans = p1;
 
        if (p2 > ans)
            ans = p2;
 
        if (p3 > ans)
            ans = p3;
 
        if (p4 > ans)
            ans = p4;
 
        cout << ans << endl;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y;
        cin >> x >> y;
 
        if (x == 0 && y == 0) {
            cout << 0 << '
';
        }
        else {
            long long d = x * x + y * y;
            long long r = sqrt(d);
 
            if (r * r == d)
                cout << 1 << '
';
            else
                cout << 2 << '
';
        }
    }
 
    return 0;
}
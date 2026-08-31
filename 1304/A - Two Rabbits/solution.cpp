#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
 
        long long distance = y - x;
        long long move = a + b;
 
        if (distance % move == 0) {
            cout << distance / move << '
';
        } else {
            cout << -1 << '
';
        }
    }
 
    return 0;
}  
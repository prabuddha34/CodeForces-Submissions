#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    const double PI = acos(-1.0);
 
    while (T--) {
        int n;
        cin >> n;
 
        double angle = PI / (2.0 * n);
        double answer = cos(angle) / sin(angle);
 
        cout << fixed << setprecision(10) << answer << '
';
    }
}
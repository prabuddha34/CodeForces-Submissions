#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    cout << fixed << setprecision(10);
 
    while (t--) {
        double d;
        cin >> d;
 
        double disc = d * d - 4 * d;
 
        if (disc < 0) {
            cout << "N
";
        } else {
            double root = sqrt(disc);
            double a = (d + root) / 2.0;
            double b = (d - root) / 2.0;
 
            cout << "Y " << a << " " << b << '
';
        }
    }
 
    return 0;
}
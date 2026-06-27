#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
 
    double p = a / b;
    double q = c / d;
 
    double ans = p / (1.0 - (1.0 - p) * (1.0 - q));
 
    cout << fixed << setprecision(10) << ans << endl;
 
    return 0;
}
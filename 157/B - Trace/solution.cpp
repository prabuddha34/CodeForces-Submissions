#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    double r[105];
 
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
 
    sort(r, r + n);
 
    double pi = acos(-1);
    double ans = 0;
 
    int sign = 1; // + for red, - for blue alternating
 
    for (int i = n - 1; i >= 0; i--) {
        ans += sign * r[i] * r[i] * pi;
        sign *= -1;
    }
 
    cout << fixed << setprecision(10) << ans << endl;
 
    return 0;
}
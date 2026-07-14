#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double l, d, v, g, r;
    cin >> l >> d >> v >> g >> r;
 
    double arrivalTime = d / v;
    double cycle = g + r;
 
    double current = fmod(arrivalTime, cycle);
 
    double waitingTime = 0.0;
 
    // At current == g, the red light has just started.
    if (current >= g) {
        waitingTime = cycle - current;
    }
 
    double remainingTime = (l - d) / v;
 
    double answer = arrivalTime + waitingTime + remainingTime;
 
    cout << fixed << setprecision(10) << answer << '
';
 
    return 0;
}
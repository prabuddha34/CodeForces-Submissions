#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double n, h;
    cin >> n >> h;
 
    cout << fixed << setprecision(10);
 
    for (int i = 1; i < n; i++) {
        double x = h * sqrt(i / n);
        cout << x << " ";
    }
 
    return 0;
}
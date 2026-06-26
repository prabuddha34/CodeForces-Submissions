#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, y;
    cin >> x >> y;
 
    int d = x * x + y * y;
    int r = sqrt(d);
 
    // If on integer-radius circle or on axis => border => black
    if (r * r == d || x == 0 || y == 0) {
        cout << "black";
        return 0;
    }
 
    // Need ceil radius ring
    if (r * r < d) r++;
 
    if (r % 2 == 0) {
        if (x * y > 0) cout << "white";
        else cout << "black";
    } else {
        if (x * y > 0) cout << "black";
        else cout << "white";
    }
 
    return 0;
}
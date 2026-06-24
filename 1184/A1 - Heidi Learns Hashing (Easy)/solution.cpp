#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long r;
    cin >> r;
 
    for (long long x = 1; x * x <= r; x++) {
        long long rem = r - x * x - x - 1;
 
        if (rem <= 0) continue;
 
        if (rem % (2 * x) == 0) {
            long long y = rem / (2 * x);
 
            if (y >= 1) {
                cout << x << " " << y << endl;
                return 0;
            }
        }
    }
 
    cout << "NO" << endl;
 
    return 0;
}
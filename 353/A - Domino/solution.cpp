#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int upper = 0, lower = 0;
    bool canSwapOddEven = false;
 
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
 
        upper += x;
        lower += y;
 
        if ((x % 2) != (y % 2)) {
            canSwapOddEven = true;
        }
    }
 
    if (upper % 2 == 0 && lower % 2 == 0) {
        cout << 0 << endl;
    }
    else if (upper % 2 == 1 && lower % 2 == 1 && canSwapOddEven) {
        cout << 1 << endl;
    }
    else {
        cout << -1 << endl;
    }
 
    return 0;
}
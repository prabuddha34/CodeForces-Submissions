#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long l, r;
    cin >> l >> r;
 
    long long x;
 
    if (l % 2 == 0) {
        x = l;
    } else {
        x = l + 1;
    }
 
    if (x + 2 <= r) {
        cout << x << " " << x + 1 << " " << x + 2 << endl;
    } else {
        cout << -1 << endl;
    }
 
    return 0;
}
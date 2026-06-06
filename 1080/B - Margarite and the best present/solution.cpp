#include <bits/stdc++.h>
using namespace std;
 
long long pref(long long x) {
    if (x % 2 == 0)
        return x / 2;
    else
        return -(x + 1) / 2;
}
 
int main() {
    int q;
    cin >> q;
 
    while (q--) {
        long long l, r;
        cin >> l >> r;
 
        cout << pref(r) - pref(l - 1) << '
';
    }
 
    return 0;
}
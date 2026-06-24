#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, q;
    cin >> n >> q;
 
    long long even = (n * n + 1) / 2;
 
    while (q--) {
        long long x, y;
        cin >> x >> y;
 
        long long pos = ((x - 1) * n + y + 1) / 2;
 
        if ((x + y) % 2 == 0) {
            cout << pos << endl;
        } else {
            cout << even + pos << endl;
        }
    }
 
    return 0;
}
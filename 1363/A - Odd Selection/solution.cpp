#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        int odd = 0, even = 0;
 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
 
            if (a % 2) odd++;
            else even++;
        }
 
        bool ok = false;
 
        for (int takeOdd = 1; takeOdd <= x; takeOdd += 2) {
            int takeEven = x - takeOdd;
 
            if (takeOdd <= odd && takeEven <= even) {
                ok = true;
                break;
            }
        }
 
        cout << (ok ? "Yes" : "No") << endl;
    }
 
    return 0;
}
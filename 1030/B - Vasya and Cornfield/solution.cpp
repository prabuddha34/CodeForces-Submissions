#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, d;
    cin >> n >> d;
 
    int m;
    cin >> m;
 
    while (m--) {
        int x, y;
        cin >> x >> y;
 
        if (x + y >= d &&
            x + y <= 2 * n - d &&
            x - y <= d &&
            y - x <= d) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
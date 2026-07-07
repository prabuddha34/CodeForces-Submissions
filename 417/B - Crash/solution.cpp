#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<pair<int, int>> seen;
 
    bool ok = true;
 
    for (int i = 0; i < n; i++) {
        int x, k;
        cin >> x >> k;
 
        if (x > 0) {
            if (seen.count({k, x - 1}) == 0) {
                ok = false;
            }
        }
 
        seen.insert({k, x});
    }
 
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}
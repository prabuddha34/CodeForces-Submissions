#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        bool yes = false;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            int r = sqrt(x);
 
            if (r * r != x) {
                yes = true;
            }
        }
 
        if (yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int first;
        cin >> first;
 
        bool different = false;
 
        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
 
            if (x != first) {
                different = true;
            }
        }
 
        if (different) {
            cout << 1 << endl;
        } else {
            cout << n << endl;
        }
    }
 
    return 0;
}
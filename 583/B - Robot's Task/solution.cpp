#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    vector<int> done(n, 0);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int collected = 0;
    int changes = 0;
    bool leftToRight = true;
 
    while (collected < n) {
        bool got = false;
 
        if (leftToRight) {
            for (int i = 0; i < n; i++) {
                if (!done[i] && collected >= a[i]) {
                    done[i] = 1;
                    collected++;
                    got = true;
                }
            }
        } else {
            for (int i = n - 1; i >= 0; i--) {
                if (!done[i] && collected >= a[i]) {
                    done[i] = 1;
                    collected++;
                    got = true;
                }
            }
        }
 
        if (collected == n) break;
 
        changes++;
        leftToRight = !leftToRight;
    }
 
    cout << changes << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
bool canFit(int W, int H, int w1, int h1, int w2, int h2) {
    // side by side
    if (w1 + w2 <= W && max(h1, h2) <= H) return true;
 
    // one above another
    if (max(w1, w2) <= W && h1 + h2 <= H) return true;
 
    return false;
}
 
int main() {
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;
 
    bool ok = false;
 
    for (int r1 = 0; r1 < 2; r1++) {
        for (int r2 = 0; r2 < 2; r2++) {
            int w1 = a2, h1 = b2;
            int w2 = a3, h2 = b3;
 
            if (r1) swap(w1, h1);
            if (r2) swap(w2, h2);
 
            if (canFit(a1, b1, w1, h1, w2, h2)) {
                ok = true;
            }
        }
    }
 
    cout << (ok ? "YES" : "NO") << endl;
 
    return 0;
}
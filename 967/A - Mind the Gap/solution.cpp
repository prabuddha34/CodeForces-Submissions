#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, s;
    cin >> n >> s;
 
    vector<int> t(n);
 
    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        t[i] = h * 60 + m;
    }
 
    // before first landing
    if (t[0] >= s + 1) {
        cout << 0 << " " << 0 << endl;
        return 0;
    }
 
    // between two landings
    for (int i = 0; i < n - 1; i++) {
        if (t[i + 1] - t[i] >= 2 * s + 2) {
            int ans = t[i] + s + 1;
            cout << ans / 60 << " " << ans % 60 << endl;
            return 0;
        }
    }
 
    // after last landing
    int ans = t[n - 1] + s + 1;
    cout << ans / 60 << " " << ans % 60 << endl;
 
    return 0;
}
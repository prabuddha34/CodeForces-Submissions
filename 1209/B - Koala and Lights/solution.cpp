#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
 
    int ans = 0;
 
    for (int t = 0; t <= 1000; t++) {
        int on = 0;
 
        for (int i = 0; i < n; i++) {
            int state = s[i] - '0';
 
            if (t >= b[i]) {
                int toggles = (t - b[i]) / a[i] + 1;
 
                if (toggles % 2 == 1) {
                    state ^= 1;
                }
            }
 
            on += state;
        }
 
        ans = max(ans, on);
    }
 
    cout << ans << endl;
 
    return 0;
}
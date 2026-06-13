#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
 
    int ans = INT_MAX;
    int lastR = -1;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            lastR = x[i];
        }
        else { // s[i] == 'L'
            if (lastR != -1) {
                ans = min(ans, (x[i] - lastR) / 2);
            }
        }
    }
 
    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;
 
    return 0;
}
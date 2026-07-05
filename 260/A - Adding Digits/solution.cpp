#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, n;
    cin >> a >> b >> n;
 
    string ans = to_string(a);
 
    int rem = a % b;
 
    for (int i = 0; i < n; i++) {
        bool found = false;
 
        for (int digit = 0; digit <= 9; digit++) {
            int newRem = (rem * 10 + digit) % b;
 
            if (newRem == 0) {
                ans += char('0' + digit);
                rem = newRem;
                found = true;
                break;
            }
        }
 
        if (!found) {
            cout << -1 << endl;
            return 0;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
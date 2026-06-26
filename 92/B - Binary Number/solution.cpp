#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
    long long ans = 0;
    int carry = 0;
 
    for (int i = n - 1; i > 0; i--) {
        int bit = s[i] - '0';
 
        if (bit + carry == 1) {
            // odd: add 1, then it becomes even
            ans += 2;
            carry = 1;
        } else {
            // even: divide by 2
            ans += 1;
        }
    }
 
    if (carry) ans++;
 
    cout << ans << endl;
    return 0;
}
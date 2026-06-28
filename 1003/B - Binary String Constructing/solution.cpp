#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, x;
    cin >> a >> b >> x;
 
    string ans = "";
 
    int start;
    if (a > b) start = 0;
    else start = 1;
 
    for (int i = 0; i <= x; i++) {
        int c = start ^ (i % 2);
 
        if (c == 0) {
            ans += '0';
            a--;
        } else {
            ans += '1';
            b--;
        }
    }
 
    string res = "";
 
    for (char c : ans) {
        res += c;
 
        if (c == '0') {
            while (a > 0) {
                res += '0';
                a--;
            }
        } else {
            while (b > 0) {
                res += '1';
                b--;
            }
        }
    }
 
    cout << res << '
';
    return 0;
}
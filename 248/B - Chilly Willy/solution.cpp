#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n == 1 || n == 2) {
        cout << -1 << endl;
        return 0;
    }
 
    string ans = "1";
    for (int i = 1; i < n; i++) {
        ans += '0';
    }
 
    int rem = 1;
    for (int i = 1; i <= n - 1; i++) {
        rem = (rem * 10) % 210;
    }
 
    int add = (210 - rem) % 210;
 
    int pos = n - 1;
    while (add > 0) {
        int digit = add % 10;
        int current = ans[pos] - '0';
 
        ans[pos] = char('0' + current + digit);
 
        add /= 10;
        pos--;
    }
 
    cout << ans << endl;
 
    return 0;
}
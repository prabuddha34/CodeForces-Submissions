#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
    int pos = -1;
 
    for (int i = 0; i < n - 1; i++) {
        int digit = s[i] - '0';
 
        if (digit % 2 == 0) {
            pos = i;
 
            if (s[i] < s[n - 1]) {
                break;
            }
        }
    }
 
    if (pos == -1) {
        cout << -1 << '
';
    } else {
        swap(s[pos], s[n - 1]);
        cout << s << '
';
    }
 
    return 0;
}
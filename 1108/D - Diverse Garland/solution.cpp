#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    int changes = 0;
 
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            changes++;
 
            for (char c : {'R', 'G', 'B'}) {
                if (c != s[i - 1] && (i == n - 1 || c != s[i + 1])) {
                    s[i] = c;
                    break;
                }
            }
        }
    }
 
    cout << changes << '
';
    cout << s << '
';
}
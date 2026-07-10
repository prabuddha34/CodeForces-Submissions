#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
 
    cin >> n >> s;
 
    int answer = n;  
    for (int len = 1; 2 * len <= n; len++) {
        bool same = true;
 
        for (int i = 0; i < len; i++) {
            if (s[i] != s[i + len]) {
                same = false;
                break;
            }
        }
 
        if (same) {
            int operations = len + 1 + (n - 2 * len);
            answer = min(answer, operations);
        }
    }
 
    cout << answer << '
';
 
    return 0;
}
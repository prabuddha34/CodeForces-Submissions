#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b;
    cin >> n >> a >> b;
 
    string s;
    cin >> s;
 
    a--;
    b--;
 
    if (s[a] == s[b]) {
        cout << 0 << endl;
        return 0;
    }
 
    int ans = INT_MAX;
 
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            ans = 1;
            break;
        }
    }
 
    cout << ans << endl;
}
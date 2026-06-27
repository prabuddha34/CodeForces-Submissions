#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    int ans = 0;
 
    for (int i = 0; i < (int)s.size(); i++) {
        if (i % n == 0 && i >= 3) {
            if (s[i - 1] == s[i - 2] && s[i - 2] == s[i - 3]) {
                ans++;
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
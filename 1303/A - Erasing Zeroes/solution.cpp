#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int first = s.find('1');
        int last = s.rfind('1');
 
        int ans = 0;
 
        if (first != string::npos) {
            for (int i = first; i <= last; i++) {
                if (s[i] == '0')
                    ans++;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
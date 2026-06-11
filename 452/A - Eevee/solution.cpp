#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    string ans[] = {
        "vaporeon",
        "jolteon",
        "flareon",
        "espeon",
        "umbreon",
        "leafeon",
        "glaceon",
        "sylveon"
    };
 
    for (int i = 0; i < 8; i++) {
        if (ans[i].length() != n) continue;
 
        bool ok = true;
 
        for (int j = 0; j < n; j++) {
            if (s[j] != '.' && s[j] != ans[i][j]) {
                ok = false;
                break;
            }
        }
 
        if (ok) {
            cout << ans[i] << endl;
            return 0;
        }
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
bool canMake(string s, string t) {
    int n = s.size();
    int m = t.size();
 
    for (int start = 0; start < n; start++) {
        for (int turn = start; turn < n; turn++) {
            string made = "";
 
            for (int i = start; i <= turn; i++) {
                made += s[i];
            }
 
            for (int i = turn - 1; i >= 0; i--) {
                made += s[i];
            }
 
            if (made.substr(0, m) == t) {
                return true;
            }
        }
    }
 
    return false;
}
 
int main() {
    int q;
    cin >> q;
 
    while (q--) {
        string s, t;
        cin >> s >> t;
 
        if (canMake(s, t)) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}
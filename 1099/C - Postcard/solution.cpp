#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int k;
    cin >> k;
 
    int letters = 0;
    int special = 0;
    bool hasStar = false;
 
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) letters++;
        else {
            special++;
            if (s[i] == '*') hasStar = true;
        }
    }
 
    int minLen = letters - special;
    int maxLen = hasStar ? 1000000 : letters;
 
    if (k < minLen || k > maxLen) {
        cout << "Impossible
";
        return 0;
    }
 
    string ans = "";
    int needRemove = letters - k;
    int needAdd = k - letters;
 
    for (int i = 0; i < s.size(); i++) {
        if (!islower(s[i])) continue;
 
        char c = s[i];
 
        bool canChange = false;
        char op = '#';
 
        if (i + 1 < s.size() && (s[i + 1] == '?' || s[i + 1] == '*')) {
            canChange = true;
            op = s[i + 1];
        }
 
        if (needRemove > 0 && canChange) {
            needRemove--;
            continue;
        }
 
        ans += c;
 
        if (needAdd > 0 && op == '*') {
            while (needAdd--) {
                ans += c;
            }
        }
    }
 
    cout << ans << '
';
 
    return 0;
}
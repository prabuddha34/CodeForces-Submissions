#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n;
    cin >> n;
 
    string ans = "";
    bool found = false;
 
    for (int i = 0; i < n; i++) {
        string page;
        cin >> page;
 
        if (page.substr(0, s.size()) == s) {
            if (!found || page < ans) {
                ans = page;
                found = true;
            }
        }
    }
 
    if (found) {
        cout << ans;
    } else {
        cout << s;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, p;
    cin >> n >> p;
 
    string s;
    cin >> s;
 
    bool ok = false;
 
    for (int i = 0; i + p < n; i++) {
        if (s[i] == '.' && s[i + p] == '.') {
            s[i] = '0';
            s[i + p] = '1';
            ok = true;
            break;
        }
        else if (s[i] == '.' && s[i + p] != '.') {
            s[i] = (s[i + p] == '0' ? '1' : '0');
            ok = true;
            break;
        }
        else if (s[i] != '.' && s[i + p] == '.') {
            s[i + p] = (s[i] == '0' ? '1' : '0');
            ok = true;
            break;
        }
        else if (s[i] != s[i + p]) {
            ok = true;
            break;
        }
    }
 
    if (!ok) {
        cout << "No";
        return 0;
    }
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') s[i] = '0';
    }
 
    cout << s;
 
    return 0;
}
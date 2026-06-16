#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string protocol;
    int start;
 
    if (s.substr(0, 4) == "http") {
        protocol = "http";
        start = 4;
    } else {
        protocol = "ftp";
        start = 3;
    }
 
    int pos = -1;
 
    // find "ru" after domain, domain must be non-empty
    for (int i = start + 1; i + 1 < s.size(); i++) {
        if (s[i] == 'r' && s[i + 1] == 'u') {
            pos = i;
            break;
        }
    }
 
    cout << protocol << "://";
 
    // domain
    for (int i = start; i < pos; i++) {
        cout << s[i];
    }
 
    cout << ".ru";
 
    // context exists
    if (pos + 2 < s.size()) {
        cout << "/";
        for (int i = pos + 2; i < s.size(); i++) {
            cout << s[i];
        }
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string mirror = "AHIMOTUVWXY";
 
    for (int i = 0; i < s.length(); i++) {
        if (mirror.find(s[i]) == string::npos) {
            cout << "NO";
            return 0;
        }
    }
 
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
    return 0;
}
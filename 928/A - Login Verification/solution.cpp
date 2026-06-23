#include <bits/stdc++.h>
using namespace std;
 
string normalize(string s) {
    for (char &c : s) {
        c = tolower(c);
 
        if (c == 'o') c = '0';
 
        if (c == 'l' || c == 'i') c = '1';
    }
 
    return s;
}
 
int main() {
    string login;
    cin >> login;
 
    login = normalize(login);
 
    int n;
    cin >> n;
 
    bool ok = true;
 
    while (n--) {
        string s;
        cin >> s;
 
        if (normalize(s) == login) {
            ok = false;
        }
    }
 
    if (ok) cout << "Yes
";
    else cout << "No
";
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
 
    int l = s.find('[');
    if (l == string::npos) {
        cout << -1 << endl;
        return 0;
    }
 
    int c1 = -1;
    for (int i = l + 1; i < n; i++) {
        if (s[i] == ':') {
            c1 = i;
            break;
        }
    }
 
    int r = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ']') {
            r = i;
            break;
        }
    }
 
    if (r == -1) {
        cout << -1 << endl;
        return 0;
    }
 
    int c2 = -1;
    for (int i = r - 1; i >= 0; i--) {
        if (s[i] == ':') {
            c2 = i;
            break;
        }
    }
 
    if (c1 == -1 || c2 == -1 || c1 >= c2) {
        cout << -1 << endl;
        return 0;
    }
 
    int bars = 0;
    for (int i = c1 + 1; i < c2; i++) {
        if (s[i] == '|') bars++;
    }
 
    cout << bars + 4 << endl;
 
    return 0;
}
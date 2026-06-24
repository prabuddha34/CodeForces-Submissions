#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    string s, t;
    cin >> s >> t;
 
    int pos = s.find('*');
 
    if (pos == -1) {
        cout << (s == t ? "YES" : "NO");
        return 0;
    }
 
    string left = s.substr(0, pos);
    string right = s.substr(pos + 1);
 
    if (m < left.size() + right.size()) {
        cout << "NO";
        return 0;
    }
 
    if (t.substr(0, left.size()) == left &&
        t.substr(m - right.size()) == right) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}
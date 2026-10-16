#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string a, b;
        cin >> a >> b;
 
        if (a == b) {
            cout << "=" << endl;
        }
        else if (a.back() == 'S' && b.back() == 'S') {
            if (a.size() > b.size()) {
                cout << "<" << endl;
            }
            else {
                cout << ">" << endl;
            }
        }
        else if (a.back() == 'L' && b.back() == 'L') {
            if (a.size() > b.size()) {
                cout << ">" << endl;
            }
            else {
                cout << "<" << endl;
            }
        }
        else {
            int x = 0, y = 0;
 
            if (a.back() == 'S') x = 1;
            else if (a.back() == 'M') x = 2;
            else x = 3;
 
            if (b.back() == 'S') y = 1;
            else if (b.back() == 'M') y = 2;
            else y = 3;
 
            if (x < y) cout << "<" << endl;
            else cout << ">" << endl;
        }
    }
 
    return 0;
}
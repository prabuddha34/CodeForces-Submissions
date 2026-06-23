#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (i > 0 && s[i - 1] == '1') {
                cout << "No";
                return 0;
            }
            if (i + 1 < n && s[i + 1] == '1') {
                cout << "No";
                return 0;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            bool left = (i > 0 && s[i - 1] == '1');
            bool right = (i + 1 < n && s[i + 1] == '1');
 
            if (!left && !right) {
                cout << "No";
                return 0;
            }
        }
    }
 
    cout << "Yes";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, t;
    cin >> s >> t;
 
    int diff = 0;
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != t[i]) {
            diff++;
        }
    }
 
    if (diff % 2 == 1) {
        cout << "impossible" << endl;
        return 0;
    }
 
    int takeS = diff / 2;
    string p = s;
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != t[i]) {
            if (takeS > 0) {
                p[i] = s[i];
                takeS--;
            } else {
                p[i] = t[i];
            }
        } else {
            p[i] = s[i];
        }
    }
 
    cout << p << endl;
 
    return 0;
}
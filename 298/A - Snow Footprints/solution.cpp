#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    int first = -1, last = -1;
 
    for (int i = 0; i < n; i++) {
        if (s[i] != '.') {
            if (first == -1) first = i;
            last = i;
        }
    }
 
    bool hasR = false, hasL = false;
 
    for (char c : s) {
        if (c == 'R') hasR = true;
        if (c == 'L') hasL = true;
    }
 
    if (hasR && !hasL) {
        cout << first + 1 << " " << last + 2 << endl;
    } 
    else if (!hasR && hasL) {
        cout << last + 1 << " " << first << endl;
    } 
    else {
        int lastR = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') lastR = i;
        }
 
        cout << first + 1 << " " << lastR + 1 << endl;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, a, b;
    cin >> s >> a >> b;
 
    bool forward = false;
    bool backward = false;
 
    int first = s.find(a);
 
    if (first != string::npos) {
        int second = s.find(b, first + a.length());
 
        if (second != string::npos) {
            forward = true;
        }
    }
 
    reverse(s.begin(), s.end());
 
    first = s.find(a);
 
    if (first != string::npos) {
        int second = s.find(b, first + a.length());
 
        if (second != string::npos) {
            backward = true;
        }
    }
 
    if (forward && backward) {
        cout << "both";
    }
    else if (forward) {
        cout << "forward";
    }
    else if (backward) {
        cout << "backward";
    }
    else {
        cout << "fantasy";
    }
 
    return 0;
}
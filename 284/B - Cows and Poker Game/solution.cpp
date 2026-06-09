#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
   string s;
    cin >> s;
    int cntI=0;
    int cntA=0;
    for (char c : s) {
        if (c == 'A') {
            cntA++;
        }
        if (c == 'I') {
            cntI++;
        }
 
    }
    if (cntI > 1) {
        cout << 0 << '
';
    }
    else if (cntI == 1) {
        cout << 1 << '
';
    }
    else {
        cout << cntA << '
';
    }
 
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, bx;
    cin >> n >> bx;
 
    long long X = 0;
 
    for (int i = 0; i < n; i++) {
        int digit;
        cin >> digit;
        X = X * bx + digit;
    }
 
    int m, by;
    cin >> m >> by;
 
    long long Y = 0;
 
    for (int i = 0; i < m; i++) {
        int digit;
        cin >> digit;
        Y = Y * by + digit;
    }
 
    if (X < Y) cout << "<" << endl;
    else if (X > Y) cout << ">" << endl;
    else cout << "=" << endl;
 
    return 0;
}
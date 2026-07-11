#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int col0 = 1, col1 = 1;
    for (char ch : s) {
        if (ch == '0') {
            cout << 1 << " " << col0 << '
';
            col0++;
            if (col0 == 5)
                col0 = 1;
        }
        else {
            cout << 3 << " " << col1 << '
';
            col1 += 2;
            if (col1 == 5)
                col1 = 1;
        }
    }
}
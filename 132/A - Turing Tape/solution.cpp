#include <bits/stdc++.h>
using namespace std;
 
int rev(int x) {
    int y = 0;
    for (int i = 0; i < 8; i++) {
        y = (y << 1) | (x & 1);
        x >>= 1;
    }
    return y;
}
 
int main() {
    string s;
    getline(cin, s);
 
    int prev = 0;
 
    for (char c : s) {
        int cur = rev((unsigned char)c);
        cout << (prev - cur + 256) % 256 << '
';
        prev = cur;
    }
}
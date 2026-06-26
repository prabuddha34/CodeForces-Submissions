#include <bits/stdc++.h>
using namespace std;
 
string maskNum(int x) {
    string res = "";
 
    string s = to_string(x);
 
    for (char ch : s) {
        if (ch == '4' || ch == '7') {
            res += ch;
        }
    }
 
    return res;
}
 
int main() {
    int a;
    string b;
    cin >> a >> b;
 
    for (int c = a + 1; ; c++) {
        if (maskNum(c) == b) {
            cout << c;
            return 0;
        }
    }
 
    return 0;
}
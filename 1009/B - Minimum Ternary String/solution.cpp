#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int ones = 0;
    string ans = "";
 
    for (char ch : s) {
        if (ch == '1')
            ones++;
        else
            ans += ch;
    }
 
    int pos = ans.find('2');
 
    if (pos == string::npos) {
        cout << ans << string(ones, '1');
    } else {
        cout << ans.substr(0, pos);
        cout << string(ones, '1');
        cout << ans.substr(pos);
    }
}
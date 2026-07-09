#include <bits/stdc++.h>
using namespace std;
 
string getPattern(string s) {
    string p = "";
 
    for (char ch : s) {
        int digit = ch - '0';
 
        if (digit % 2 == 0) {
            p += '0';
        } else {
            p += '1';
        }
    }
 
    while (p.size() < 18) {
        p = "0" + p;
    }
 
    return p;
}
 
int main() {
    int t;
    cin >> t;
 
    map<string, long long> mp;
 
    while (t--) {
        char type;
        string s;
 
        cin >> type >> s;
 
        string pattern = getPattern(s);
 
        if (type == '+') {
            mp[pattern]++;
        } else if (type == '-') {
            mp[pattern]--;
        } else {
            cout << mp[pattern] << endl;
        }
    }
 
    return 0;
}
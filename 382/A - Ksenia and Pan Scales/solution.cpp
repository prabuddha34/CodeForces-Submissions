#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, extra;
    cin >> s >> extra;
 
    int pos = s.find('|');
 
    string left = s.substr(0, pos);
    string right = s.substr(pos + 1);
 
    for (char ch : extra) {
        if (left.size() <= right.size()) {
            left += ch;
        } else {
            right += ch;
        }
    }
 
    if (left.size() == right.size()) {
        cout << left << "|" << right << endl;
    } else {
        cout << "Impossible" << endl;
    }
 
    return 0;
}
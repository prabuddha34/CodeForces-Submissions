#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int depth = 0;
 
    for (int i = 0; i < s.size();) {
        string tag;
 
        while (i < s.size() && s[i] != '>') {
            tag += s[i];
            i++;
        }
        tag += '>';
        i++;
 
        if (tag[1] == '/') { // closing tag
            depth--;
 
            for (int j = 0; j < 2 * depth; j++)
                cout << ' ';
 
            cout << tag << '
';
        } else { // opening tag
            for (int j = 0; j < 2 * depth; j++)
                cout << ' ';
 
            cout << tag << '
';
 
            depth++;
        }
    }
 
    return 0;
}
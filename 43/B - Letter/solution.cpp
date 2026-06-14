#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s1, s2;
 
    getline(cin, s1);
    getline(cin, s2);
 
    int freq[256] = {0};
 
    for (char c : s1) {
        if (c != ' ') {
            freq[c]++;
        }
    }
 
    for (char c : s2) {
        if (c == ' ') {
            continue;
        }
 
        if (freq[c] == 0) {
            cout << "NO";
            return 0;
        }
 
        freq[c]--;
    }
 
    cout << "YES";
 
    return 0;
}
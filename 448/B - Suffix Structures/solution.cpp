#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, t;
    cin >> s >> t;
 
    vector<int> cs(26, 0), ct(26, 0);
 
    for (char c : s) cs[c - 'a']++;
    for (char c : t) ct[c - 'a']++;
 
    // check impossible
    for (int i = 0; i < 26; i++) {
        if (ct[i] > cs[i]) {
            cout << "need tree";
            return 0;
        }
    }
 
    // check array
    if (s.size() == t.size()) {
        cout << "array";
        return 0;
    }
 
    // check automaton: t is subsequence of s
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (j < t.size() && s[i] == t[j]) {
            j++;
        }
    }
 
    if (j == t.size()) {
        cout << "automaton";
    } else {
        cout << "both";
    }
 
    return 0;
}
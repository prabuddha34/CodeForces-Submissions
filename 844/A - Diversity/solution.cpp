#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int k;
 
    cin >> s;
    cin >> k;
 
    if (s.size() < k) {
        cout << "impossible";
        return 0;
    }
 
    int freq[26] = {0};
 
    for (char c : s) {
        freq[c - 'a'] = 1;
    }
 
    int different = 0;
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 1) {
            different++;
        }
    }
 
    if (different >= k) {
        cout << 0;
    } else {
        cout << k - different;
    }
 
    return 0;
}
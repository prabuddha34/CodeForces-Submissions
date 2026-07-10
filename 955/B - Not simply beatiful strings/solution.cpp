#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int freq[26] = {0};
 
    for (char ch : s) {
        freq[ch - 'a']++;
    }
 
    int different = 0;
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            different++;
        }
    }
 
    bool possible = false;
 
    if (different == 4) {
        
        possible = true;
    }
    else if (different == 3) {
        
        for (int i = 0; i < 26; i++) {
            if (freq[i] >= 2) {
                possible = true;
            }
        }
    }
    else if (different == 2) {
    
        possible = true;
 
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0 && freq[i] < 2) {
                possible = false;
            }
        }
    }
 
    cout << (possible ? "Yes
" : "No
");
 
    return 0;
}
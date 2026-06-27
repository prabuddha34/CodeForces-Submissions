#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
 
    for (int l = 0; l + 26 <= n; l++) {
        vector<int> freq(26, 0);
        int q = 0;
        bool ok = true;
 
        for (int i = l; i < l + 26; i++) {
            if (s[i] == '?') q++;
            else {
                freq[s[i] - 'A']++;
                if (freq[s[i] - 'A'] > 1) ok = false;
            }
        }
 
        if (!ok) continue;
 
        vector<char> missing;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) {
                missing.push_back(char('A' + i));
            }
        }
 
        if ((int)missing.size() == q) {
            int ptr = 0;
 
            for (int i = l; i < l + 26; i++) {
                if (s[i] == '?') {
                    s[i] = missing[ptr++];
                }
            }
 
            for (char &ch : s) {
                if (ch == '?') ch = 'A';
            }
 
            cout << s << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
    return 0;
}
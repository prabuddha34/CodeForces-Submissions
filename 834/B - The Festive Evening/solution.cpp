#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int first[26], last[26];
 
    for (int i = 0; i < 26; i++) {
        first[i] = -1;
        last[i] = -1;
    }
 
    for (int i = 0; i < n; i++) {
        int ch = s[i] - 'A';
 
        if (first[ch] == -1) {
            first[ch] = i;
        }
 
        last[ch] = i;
    }
 
    int open = 0;
 
    for (int i = 0; i < n; i++) {
        int ch = s[i] - 'A';
 
        if (first[ch] == i) {
            open++;
        }
 
        if (open > k) {
            cout << "YES";
            return 0;
        }
 
        if (last[ch] == i) {
            open--;
        }
    }
 
    cout << "NO";
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n;
    cin >> n;
 
    vector<int> cnt(26, 0);
 
    for (char c : s) {
        cnt[c - 'a']++;
    }
 
    for (int k = 1; k <= 1000; k++) {
        string sheet = "";
 
        for (int i = 0; i < 26; i++) {
            int need = (cnt[i] + k - 1) / k;
 
            for (int j = 0; j < need; j++) {
                sheet += char('a' + i);
            }
        }
 
        if ((int)sheet.size() <= n) {
            while ((int)sheet.size() < n) {
                sheet += 'a';
            }
 
            cout << k << endl;
            cout << sheet << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int type(char c) {
    if (isdigit(c)) return 0; // digit
    if (islower(c)) return 1; // lowercase
    return 2;                 // uppercase
}
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        string s;
        cin >> s;
 
        int cnt[3] = {0, 0, 0};
 
        for (char c : s) {
            cnt[type(c)]++;
        }
 
        string need = "0aA";
 
        for (int missing = 0; missing < 3; missing++) {
            if (cnt[missing] == 0) {
                for (int i = 0; i < s.size(); i++) {
                    int cur = type(s[i]);
 
                    if (cnt[cur] > 1) {
                        cnt[cur]--;
                        s[i] = need[missing];
                        cnt[missing]++;
                        break;
                    }
                }
            }
        }
 
        cout << s << endl;
    }
 
    return 0;
}
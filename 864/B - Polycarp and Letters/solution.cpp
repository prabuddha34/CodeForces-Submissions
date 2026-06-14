#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int freq[26] = {0};
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a'] = 1;
        } else {
            int count = 0;
 
            for (int j = 0; j < 26; j++) {
                if (freq[j] == 1) {
                    count++;
                }
                freq[j] = 0;
            }
 
            ans = max(ans, count);
        }
    }
 
    int count = 0;
 
    for (int j = 0; j < 26; j++) {
        if (freq[j] == 1) {
            count++;
        }
    }
 
    ans = max(ans, count);
 
    cout << ans << endl;
 
    return 0;
}
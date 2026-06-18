#include <bits/stdc++.h>
using namespace std;
 
int countVK(string s) {
    int cnt = 0;
 
    for (int i = 0; i + 1 < s.size(); i++) {
        if (s[i] == 'V' && s[i + 1] == 'K') {
            cnt++;
        }
    }
 
    return cnt;
}
 
int main() {
    string s;
    cin >> s;
 
    int ans = countVK(s);
 
    for (int i = 0; i < s.size(); i++) {
        string temp = s;
 
        if (temp[i] == 'V')
            temp[i] = 'K';
        else
            temp[i] = 'V';
 
        ans = max(ans, countVK(temp));
    }
 
    cout << ans << endl;
 
    return 0;
}
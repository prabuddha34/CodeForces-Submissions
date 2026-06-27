#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int m;
    cin >> m;
 
    while (m--) {
        int l, r, k;
        cin >> l >> r >> k;
 
        l--;
        r--;
 
        int len = r - l + 1;
        k %= len;
 
        if (k == 0) continue;
 
        string sub = s.substr(l, len);
        string rotated = sub.substr(len - k) + sub.substr(0, len - k);
 
        for (int i = 0; i < len; i++)
            s[l + i] = rotated[i];
    }
 
    cout << s << '
';
 
    return 0;
}
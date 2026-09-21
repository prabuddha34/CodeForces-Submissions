#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
 
        string s;
        cin >> s;
 
        while (m--) {
            string temp = s;
            bool changed = false;
 
            for (int i = 0; i < n; i++) {
                if (s[i] == '1')
                    continue;
 
                int cnt = 0;
 
                if (i > 0 && s[i - 1] == '1')
                    cnt++;
 
                if (i + 1 < n && s[i + 1] == '1')
                    cnt++;
 
                if (cnt == 1) {
                    temp[i] = '1';
                    changed = true;
                }
            }
 
            s = temp;
 
            if (!changed)
                break;
        }
 
        cout << s << endl;
    }
 
    return 0;
}
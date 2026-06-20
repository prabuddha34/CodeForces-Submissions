#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        int first = s.find('*');
        int last = s.rfind('*');
 
        int ans = 1;
        int pos = first;
 
        while (pos != last) {
            int next = pos;
 
            for (int i = min(n - 1, pos + k); i > pos; i--) {
                if (s[i] == '*') {
                    next = i;
                    break;
                }
            }
 
            ans++;
            pos = next;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
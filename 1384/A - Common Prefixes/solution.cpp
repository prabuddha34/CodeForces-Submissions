#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        vector<string> s(n + 1);
 
        s[0] = string(200, 'a');
 
        for (int i = 0; i < n; i++) {
            s[i + 1] = s[i];
 
            if (s[i + 1][a[i]] == 'a') {
                s[i + 1][a[i]] = 'b';
            } else {
                s[i + 1][a[i]] = 'a';
            }
        }
 
        for (int i = 0; i <= n; i++) {
            cout << s[i] << endl;
        }
    }
 
    return 0;
}
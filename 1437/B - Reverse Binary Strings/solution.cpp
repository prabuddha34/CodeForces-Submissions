#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int bad = 0;
 
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                bad++;
            }
        }
 
        cout << (bad + 1) / 2 << endl;
    }
 
    return 0;
}
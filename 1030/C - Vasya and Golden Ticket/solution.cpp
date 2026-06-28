#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    for (int end = 0; end < n - 1; end++) {
        int target = 0;
 
        for (int i = 0; i <= end; i++) {
            target += s[i] - '0';
        }
 
        int cur = 0;
        int parts = 0;
        bool ok = true;
 
        for (int i = 0; i < n; i++) {
            cur += s[i] - '0';
 
            if (cur == target) {
                parts++;
                cur = 0;
            } 
            else if (cur > target) {
                ok = false;
                break;
            }
        }
 
        if (ok && cur == 0 && parts >= 2) {
            cout << "YES
";
            return 0;
        }
    }
 
    cout << "NO
";
    return 0;
}
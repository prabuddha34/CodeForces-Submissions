#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
    long long ans = 0;
 
    int last = -1;
 
    for (int r = 0; r < n; r++) {
        if (r >= 3) {
            string t = s.substr(r - 3, 4);
 
            if (t == "bear") {
                last = r - 3;
            }
        }
 
        if (last != -1) {
            ans += last + 1;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
 
    cin >> n >> s;
 
    for (int start = 0; start < n; start++) {
        for (int jump = 1; start + 4 * jump < n; jump++) {
            bool ok = true;
 
            for (int k = 0; k < 5; k++) {
                if (s[start + k * jump] != '*') {
                    ok = false;
                    break;
                }
            }
 
            if (ok) {
                cout << "yes
";
                return 0;
            }
        }
    }
 
    cout << "no
";
 
    return 0;
}
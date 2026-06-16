#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int ans = 0;
 
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
 
        bool found[10] = {false};
 
        for(int j = 0; j < s.size(); j++) {
            int digit = s[j] - '0';
            found[digit] = true;
        }
 
        bool good = true;
 
        for(int d = 0; d <= k; d++) {
            if(found[d] == false) {
                good = false;
                break;
            }
        }
 
        if(good) {
            ans++;
        }
    }
 
    cout << ans;
 
    return 0;
}
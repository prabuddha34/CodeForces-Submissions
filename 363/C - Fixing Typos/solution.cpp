#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string ans = "";
 
    for (char c : s) {
        int len = ans.size();
 
       
        if (len >= 2 && ans[len - 1] == c && ans[len - 2] == c) {
            continue;
        }
 
     
        if (len >= 3 && ans[len - 1] == c && ans[len - 2] == ans[len - 3]) {
            continue;
        }
 
        ans += c;
    }
 
    cout << ans << endl;
 
    return 0;
}
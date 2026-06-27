#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    long long heavy = 0, ans = 0;
 
    for (int i = 0; i + 4 < (int)s.size(); i++) {
        string sub = s.substr(i, 5);
 
        if (sub == "heavy") {
            heavy++;
        }
 
        if (sub == "metal") {
            ans += heavy;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
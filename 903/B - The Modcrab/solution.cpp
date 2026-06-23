#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int h1, a1, c1;
    int h2, a2;
 
    cin >> h1 >> a1 >> c1;
    cin >> h2 >> a2;
 
    vector<string> ans;
 
    while (h2 > 0) {
        if (h2 <= a1) {
            ans.push_back("STRIKE");
            h2 -= a1;
        }
        else {
            if (h1 <= a2) {
                ans.push_back("HEAL");
                h1 += c1;
                h1 -= a2;
            }
            else {
                ans.push_back("STRIKE");
                h2 -= a1;
                h1 -= a2;
            }
        }
    }
 
    cout << ans.size() << endl;
 
    for (string s : ans) {
        cout << s << endl;
    }
 
    return 0;
}
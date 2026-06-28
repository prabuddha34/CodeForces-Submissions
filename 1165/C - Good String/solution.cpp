#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    string ans;
    int deleted = 0;
 
    for (char c : s) {
        if (ans.size() % 2 == 0) {
            ans += c;
        } else {
            if (ans.back() != c) {
                ans += c;
            } else {
                deleted++;
            }
        }
    }
 
    if (ans.size() % 2 == 1) {
        ans.pop_back();
        deleted++;
    }
 
    cout << deleted << "
";
    cout << ans << "
";
 
    return 0;
}
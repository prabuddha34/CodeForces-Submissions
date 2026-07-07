#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string a;
    cin >> n >> a;
 
    string ans = "";
 
    for (char c : a) {
        if (c == '2') ans += "2";
        else if (c == '3') ans += "3";
        else if (c == '4') ans += "322";
        else if (c == '5') ans += "5";
        else if (c == '6') ans += "53";
        else if (c == '7') ans += "7";
        else if (c == '8') ans += "7222";
        else if (c == '9') ans += "7332";
    }
 
    sort(ans.rbegin(), ans.rend());
 
    cout << ans << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    long long ans = 0;
    int people = 0;
 
    while (getline(cin, s)) {
        if (s[0] == '+') {
            people++;
        }
        else if (s[0] == '-') {
            people--;
        }
        else {
            int pos = s.find(':');
            int len = s.size() - pos - 1;
            ans += 1LL * people * len;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
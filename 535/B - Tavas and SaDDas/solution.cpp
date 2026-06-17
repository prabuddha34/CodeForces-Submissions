#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    long long ans = 0;
    int len = s.size();
 
    ans += (1LL << len) - 2;
 
    long long cur = 0;
 
    for (char c : s) {
        cur <<= 1;
        if (c == '7') cur |= 1;
    }
 
    ans += cur + 1;
 
    cout << ans << endl;
 
    return 0;
}
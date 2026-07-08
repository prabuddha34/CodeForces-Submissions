#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string t = "";
    t += s[0];
    t += s[2];
    t += s[4];
    t += s[3];
    t += s[1];
 
    long long num = stoll(t);
 
    long long mod = 100000;
    long long ans = 1;
 
    for (int i = 0; i < 5; i++) {
        ans = (ans * num) % mod;
    }
 
    cout << setw(5) << setfill('0') << ans << endl;
 
    return 0;
}
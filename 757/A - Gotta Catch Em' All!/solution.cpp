#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    map<char,int> cnt;
 
    for (char c : s)
        cnt[c]++;
 
    cnt['a'] /= 2;
    cnt['u'] /= 2;
 
    int ans = min({cnt['B'], cnt['u'], cnt['l'],
                   cnt['b'], cnt['a'], cnt['s'],
                   cnt['r']});
 
    cout << ans;
 
    return 0;
}
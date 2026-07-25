#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
string t,s;
    cin>>t>>s;
    vector<int>need(10),have(10);
    for (char c : t) need[c - '0']++;
    for (char c : s) have[c - '0']++;
    int ans=1e9;
    for (int i=0;i<=9;i++) {
        if (i ==2 ||i ==5 || i ==6 || i==9) {
            continue;
        }
        if (need[i])
            ans = min(ans, have[i] / need[i]);
    }
    if (need[6] + need[9])
        ans = min(ans, (have[6] + have[9]) / (need[6] + need[9]));
 
    if (need[2] + need[5])
        ans = min(ans, (have[2] + have[5]) / (need[2] + need[5]));
 
 
    cout << (ans == 1e9 ? 0 : ans);
 
 
    return 0;
}
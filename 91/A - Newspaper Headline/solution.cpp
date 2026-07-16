#include <bits/stdc++.h>
using namespace std;
 
int main() {
string s1, s2;
    cin >> s1 >> s2;
    vector<int>pos[26];
    for (int i = 0; i <s1.size(); i++) {
        pos[s1[i]-'a'].push_back(i);
    }
    int ans=1;
    int curr=-1;
    for (char ch:s2) {
        int x=ch-'a';
        if (pos[x].empty()) {
            cout<<-1<<endl;
            return 0;
        }
        auto it = upper_bound(pos[x].begin(), pos[x].end(), curr);
        if (it == pos[x].end()) {
            ans++;
            curr=pos[x][0];
        }
        else {
            curr=*it;
        }
 
    }
    cout<<ans<<endl;
    return 0;
}
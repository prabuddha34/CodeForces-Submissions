#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m;
    cin>>n>>m;
    string s;
    cin >> s;
    vector<char>mp(26);
    for(int i=0;i<26;i++) {
        mp[i]=char('a'+i);
    }
    while(m--) {
        char x,y;
        cin>>x>>y;
        for (int i = 0; i < 26; i++) {
            if (mp[i] == x) mp[i] = y;
            else if (mp[i] == y) mp[i] = x;
        }
    }
 
    for (char c : s) {
        cout << mp[c - 'a'];
    }
 
    cout << endl;
    return 0;
}
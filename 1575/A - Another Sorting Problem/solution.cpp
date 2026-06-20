#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,m;
    vector<pair<string,int>>v;
    cin>>n>>m;
    for (int i=1;i<=n;i++) {
        string s;
        cin>>s;
        string key=s;
        for (int j=0;j<m;j++) {
            if ((j+1)%2==0) {
                key[j] = char('Z' - (s[j] - 'A'));
            }
 
        }
        v.push_back({key, i});
 
 
    }
    sort(v.begin(),v.end());
    
    for (auto p : v) {
        cout << p.second << " ";
    }
 
   return 0;
}
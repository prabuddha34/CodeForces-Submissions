#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
       int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0;
        bool flag=false;
        for (int i = 0; i < n; i++) {
            if (s[i]=='Q')
            cnt++;
            else cnt--;
 
            if (cnt<0)cnt=0;
        }
        if (cnt==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
 
    return 0;
}
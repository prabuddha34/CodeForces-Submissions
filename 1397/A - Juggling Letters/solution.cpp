#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
    cin>>t;
    while(t--) {
     int n;
     cin>>n;
        int cnt[26]={};
        for(int i=0;i<n;i++) {
            string s;
            cin>>s;
            for (char c : s) {
                cnt[c-'a']++;
            }
 
        }
        bool ok = true;
        for (int i=0;i<26;i++) {
            if (cnt[i]%n!=0) {
                ok = false;
                break;
            }
 
        }
        if(ok) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
 
 
    }
 
    return 0;
}
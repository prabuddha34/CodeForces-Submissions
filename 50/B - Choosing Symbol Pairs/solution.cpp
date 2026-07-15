#include <bits/stdc++.h>
using namespace std;
 
int main(){
string s;
    cin>>s;
    long long count[256]={0};
    for (char c : s) {
        count[c]++;
    }
    long long ans=0;
    for (int i=0;i<256;i++) {
        ans+=count[i]*count[i];
 
    }
    cout<<ans<<endl;
    return 0;
}
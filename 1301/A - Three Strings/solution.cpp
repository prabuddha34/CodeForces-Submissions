#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
    cin>>t;
    while(t--) {
        string a,b,c;
        cin>>a>>b>>c;
        bool isHappens=true;
        for (int i=0;i<a.size();i++) {
            if (a[i]!=c[i] &&b[i]!=c[i]) {
                isHappens=false;
                break;
            }
        }
        if(isHappens==true) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
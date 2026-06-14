#include <bits/stdc++.h>
using namespace std;
 
int main() {
int x1,y1,z1,x2,y2,z2;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    if (abs(x1-x2)+abs(y1-y2)+abs(z1-z2) >=3) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,m,r;
    cin>>a>>b>>m>>r;
    vector<int>first(m,-1);
    int step=0;
    while (first[r]==-1) {
        first[r]=step;
        r=(a*r+b)%m;
        step++;
    }
    cout<<step-first[r]<<endl;
 
    return 0;
}
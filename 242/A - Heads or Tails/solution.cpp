#include <bits/stdc++.h>
using namespace std;
int main(){
  int x,y,a,b;
    cin>>x>>y>>a>>b;
    vector<pair<int,int>>v;
    for(int i=a;i<=x;i++) {
        for(int j=b;j<=y;j++) {
            if (i>j) {
                v.push_back(pair<int,int>(i,j));
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
 
 
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool mark[11];
bool flag1,flag2;
 
int main()
{
    ll n;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        mark[s[i]-'0']=true;
    }
    if((mark[1]||mark[2]||mark[3])&&(mark[7]||mark[9]))
        flag1=true;
    if((mark[1]||mark[4]||mark[7])&&(mark[3]||mark[6]||mark[9]))
        flag2=true;
    if((mark[1]||mark[2]||mark[3])&&mark[0]){
        cout<<"YES";
        return 0;
    }
    if(flag1&&flag2){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
return 0;
}
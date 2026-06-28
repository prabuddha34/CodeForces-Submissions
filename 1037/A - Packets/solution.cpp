#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1,z=0;
    while(true)
    {
        if(n>0) z++;
        else break;
        n-=k;
        k*=2;
    }
    cout<<z;
    return 0;
}
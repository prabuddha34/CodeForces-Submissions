#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long k,l;
    cin>>k>>l;
    int cnt=0;
    while(l>1 && l%k==0) {
        cnt++;
        l/=k;
    }
    if (l==1) {
        cout<<"YES"<<endl;
        cout<<cnt-1<<endl;
    }
    else {
        cout << "NO
";
    }
    return 0;
}
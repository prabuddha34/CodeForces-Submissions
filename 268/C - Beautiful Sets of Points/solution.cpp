#include <bits/stdc++.h>
using namespace std;
int main() {
 
int n,m;
    cin>>n>>m;
    int k=min(n,m)+1;
    cout<<k<<endl;
    for (int i = 0; i < k; i++)
        cout << i << ' ' << m - i << '
';
 
 
    return 0;
}
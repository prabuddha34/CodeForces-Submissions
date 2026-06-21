#include <bits/stdc++.h>
using namespace std;
 
int reverse(int x) {
    int rev=0;
    while (x!=0) {
        int rem = x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    return rev;
}
int main() {
int a,b;
    cin>>a>>b;
    int ans=a+reverse(b);
    cout<<ans<<endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
 int n,k;
    cin>>n>>k;
    long long sum=0;
    for(int i=0;i<n;i++) {
        int l, r;
        cin >> l >> r;
 
        sum += r - l + 1;
    }
    int rem=sum%k;
    if(rem == 0) {
        cout << 0;
    } else {
        cout << k - rem;
    }
        return 0;
}
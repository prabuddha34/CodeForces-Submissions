#include <bits/stdc++.h>
using namespace std;
int main() {
long n,m;
    cin>>n>>m;
    long long x,y;
    cin>>x>>y;
    int k;cin>>k;
    long long ans=0;
    while (k--) {
        long long dx,dy;
        cin>>dx>>dy;
        long long steps = 4e18;
        if (dx > 0) steps = min(steps, (n - x) / dx);
        if (dx < 0) steps = min(steps, (x - 1) / (-dx));
 
        if (dy > 0) steps = min(steps, (m - y) / dy);
        if (dy < 0) steps = min(steps, (y - 1) / (-dy));
 
        x += steps * dx;
        y += steps * dy;
 
        ans += steps;
    }
    cout<<ans<<endl;
    return 0;
    }
 
 
 
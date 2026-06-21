#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long y, k, n;
    cin >> y >> k >> n;
 
    long long first = k - (y % k);
 
    if(first == k) first = k;
 
    bool found = false;
 
    for(long long x = first; x + y <= n; x += k) {
        cout << x << " ";
        found = true;
    }
 
    if(!found) cout << -1;
 
    return 0;
}
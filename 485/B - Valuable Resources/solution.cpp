#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long minX = 1e18, maxX = -1e18;
    long long minY = 1e18, maxY = -1e18;
 
    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
 
        minX = min(minX, x);
        maxX = max(maxX, x);
 
        minY = min(minY, y);
        maxY = max(maxY, y);
    }
 
    long long side = max(maxX - minX, maxY - minY);
 
    cout << side * side << '
';
 
    return 0;
}
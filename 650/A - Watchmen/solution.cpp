#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    map<long long, long long> countX;
    map<long long, long long> countY;
    map<pair<long long, long long>, long long> countPoint;
 
    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
 
        countX[x]++;
        countY[y]++;
        countPoint[{x, y}]++;
    }
 
    long long ans = 0;
 
    for (auto it : countX) {
        long long c = it.second;
        ans += c * (c - 1) / 2;
    }
 
    for (auto it : countY) {
        long long c = it.second;
        ans += c * (c - 1) / 2;
    }
 
    for (auto it : countPoint) {
        long long c = it.second;
        ans -= c * (c - 1) / 2;
    }
 
    cout << ans << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
    int n, k;
    cin >> n >> k;
 
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        int honey;
        cin >> honey;
 
        int eatTimes = min(3, honey / k);
        honey -= eatTimes * k;
 
        ans += honey;
    }
 
    cout << ans;
 
    return 0;
}
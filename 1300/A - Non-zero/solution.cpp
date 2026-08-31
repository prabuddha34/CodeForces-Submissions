#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int sum = 0;
        int zeros = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            sum += x;
 
            if (x == 0)
                zeros++;
        }
 
        sum += zeros;
 
        int ans = zeros;
 
        if (sum == 0)
            ans++;
 
        cout << ans << '
';
    }
 
    return 0;
}
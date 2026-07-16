#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
 
    long long l = 1, r = n, ans = n;
 
    while (l <= r) {
        long long mid = (l + r) / 2;
        long long x = mid, sum = 0;
 
        while (x > 0) {
            sum += x;
            x /= k;
        }
 
        if (sum >= n) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
 
    cout << ans;
}
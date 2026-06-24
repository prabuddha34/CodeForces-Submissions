#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> d(n);
 
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
 
    int l = 0, r = n - 1;
    long long sum1 = 0, sum3 = 0;
    long long ans = 0;
 
    while (l <= r) {
        if (sum1 <= sum3) {
            sum1 += d[l];
            l++;
        } else {
            sum3 += d[r];
            r--;
        }
 
        if (sum1 == sum3) {
            ans = sum1;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
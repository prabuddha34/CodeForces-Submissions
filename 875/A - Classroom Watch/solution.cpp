#include <bits/stdc++.h>
using namespace std;
 
long long digitSum(long long x) {
    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
 
int main() {
    long long n;
    cin >> n;
 
    vector<long long> ans;
 
    for (long long x = max(1LL, n - 100); x <= n; x++) {
        if (x + digitSum(x) == n) {
            ans.push_back(x);
        }
    }
 
    cout << ans.size() << '
';
 
    for (long long x : ans) {
        cout << x << '
';
    }
 
    return 0;
}
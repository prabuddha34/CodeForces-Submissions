#include <bits/stdc++.h>
using namespace std;
 
long long digitSum(long long n) {
    long long sum = 0;
 
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
 
    return sum;
}
 
int main() {
    long long n;
    cin >> n;
 
    long long root = sqrt(n);
    long long ans = -1;
 
    for (long long x = max(1LL, root - 200); x <= root; x++) {
        long long value = x * x + digitSum(x) * x;
 
        if (value == n) {
            ans = x;
            break;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
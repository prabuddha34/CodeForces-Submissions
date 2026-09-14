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
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        while (__gcd(n, digitSum(n)) == 1) {
            n++;
        }
 
        cout << n << '
';
    }
 
    return 0;
}
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
 
    long long p = 1;
 
    while (p * 10 <= n) {
        p *= 10;
    }
 
    long long a = p - 1;
    long long b = n - a;
 
    cout << digitSum(a) + digitSum(b) << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
bool isCube(long long n) {
    long long l = 1, r = 10000;
 
    while (l <= r) {
        long long mid = (l + r) / 2;
        long long cube = mid * mid * mid;
 
        if (cube == n) return true;
        else if (cube < n) l = mid + 1;
        else r = mid - 1;
    }
 
    return false;
}
 
bool isCubeSum(long long x) {
    for (long long a = 1; a <= 10000; a++) {
        long long cubeA = a * a * a;
 
        if (cubeA >= x) break;
 
        long long remaining = x - cubeA;
 
        if (isCube(remaining)) {
            return true;
        }
    }
 
    return false;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x;
        cin >> x;
 
        if (isCubeSum(x)) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}
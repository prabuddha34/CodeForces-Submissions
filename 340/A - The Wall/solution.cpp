#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
 
    long long g = __gcd(x, y);
    long long l = x / g * y;
 
    cout << b / l - (a - 1) / l << endl;
 
    return 0;
}
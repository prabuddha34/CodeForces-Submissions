#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long k, a, b;
    cin >> k >> a >> b;
 
    long long mishaSets = a / k;
    long long vanyaSets = b / k;
 
    long long remA = a % k;
    long long remB = b % k;
 
    if (remA > 0 && vanyaSets == 0) {
        cout << -1 << endl;
    }
    else if (remB > 0 && mishaSets == 0) {
        cout << -1 << endl;
    }
    else {
        cout << mishaSets + vanyaSets << endl;
    }
 
    return 0;
}
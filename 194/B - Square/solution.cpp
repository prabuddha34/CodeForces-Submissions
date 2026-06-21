#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        long long n;
        cin >> n;
 
        cout << 4 * n / __gcd(4 * n, n + 1) + 1 << endl;
    }
 
    return 0;
}
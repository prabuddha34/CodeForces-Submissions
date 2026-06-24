#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    if (n % 2 == 0) {
        cout << n / 2 << endl;
        return 0;
    }
 
    long long d = n;
 
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            d = i;
            break;
        }
    }
 
    cout << 1 + (n - d) / 2 << endl;
 
    return 0;
}
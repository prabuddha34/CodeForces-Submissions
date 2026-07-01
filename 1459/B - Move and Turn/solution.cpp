#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    if (n % 2 == 0) {
        long long k = n / 2;
        cout << (k + 1) * (k + 1);
    } else {
        long long k = n / 2;
        cout << 2 * (k + 1) * (k + 2);
    }
 
    return 0;
}
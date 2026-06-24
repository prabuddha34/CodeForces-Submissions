#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n <= 2) {
        cout << 1 << '
';
        for (int i = 0; i < n; i++) cout << 1 << " ";
        return 0;
    }
 
    vector<bool> isPrime(n + 2, true);
    isPrime[0] = isPrime[1] = false;
 
    for (int i = 2; i * i <= n + 1; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n + 1; j += i) {
                isPrime[j] = false;
            }
        }
    }
 
    cout << 2 << '
';
 
    for (int i = 2; i <= n + 1; i++) {
        cout << (isPrime[i] ? 1 : 2) << " ";
    }
 
    return 0;
}
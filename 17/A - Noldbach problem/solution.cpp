#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    bool prime[1001];
 
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }
 
    prime[0] = prime[1] = false;
 
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
 
    int primes[1001];
    int cnt = 0;
 
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            primes[cnt++] = i;
        }
    }
 
    int count = 0;
 
    for (int i = 0; i < cnt - 1; i++) {
        int x = primes[i] + primes[i + 1] + 1;
 
        if (x <= n && prime[x]) {
            count++;
        }
    }
 
    if (count >= k)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}
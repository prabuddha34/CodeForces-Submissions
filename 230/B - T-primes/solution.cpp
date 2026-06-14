#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<bool> prime(1000001, true);
    prime[0] = prime[1] = false;
 
    for (long long i = 2; i * i <= 1000000; i++) {
        if (prime[i]) {
            for (long long j = i * i; j <= 1000000; j += i) {
                prime[j] = false;
            }
        }
    }
 
    while (n--) {
        long long x;
        cin >> x;
 
        long long root = sqrt(x);
 
        if (root * root == x && prime[root]) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}
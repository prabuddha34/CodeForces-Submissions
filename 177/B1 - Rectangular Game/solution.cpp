#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    long long ans = 0;
 
    while (n > 1) {
        ans += n;
 
        long long d = 2;
        while (n % d != 0) d++;
 
        n /= d;
    }
 
    ans += 1;
 
    cout << ans << endl;
 
    return 0;
}
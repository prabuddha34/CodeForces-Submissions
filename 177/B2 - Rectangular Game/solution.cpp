#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    long long ans = 0;
 
    while(n > 1) {
        ans += n;
 
        long long spf = n;
 
        for(long long i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                spf = i;
                break;
            }
        }
 
        n /= spf;
    }
 
    ans += 1;
 
    cout << ans << endl;
 
    return 0;
}
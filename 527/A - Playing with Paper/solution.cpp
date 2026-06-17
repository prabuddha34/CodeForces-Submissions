#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b;
    cin >> a >> b;
 
    long long ans = 0;
 
    while (b) {
        ans += a / b;
        long long rem = a % b;
        a = b;
        b = rem;
    }
 
    cout << ans << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b;
    cin >> a >> b;
 
    if (b - a >= 10) {
        cout << 0 << endl;
        return 0;
    }
 
    long long ans = 1;
 
    for (long long i = a + 1; i <= b; i++) {
        ans = (ans * (i % 10)) % 10;
    }
 
    cout << ans % 10 << endl;
 
    return 0;
}
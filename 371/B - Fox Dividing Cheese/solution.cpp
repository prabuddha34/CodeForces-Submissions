#include <bits/stdc++.h>
using namespace std;
 
int countFactor(long long &x, int p) {
    int cnt = 0;
    while (x % p == 0) {
        x /= p;
        cnt++;
    }
    return cnt;
}
 
int main() {
    long long a, b;
    cin >> a >> b;
 
    int ans = 0;
 
    int a2 = countFactor(a, 2);
    int b2 = countFactor(b, 2);
 
    int a3 = countFactor(a, 3);
    int b3 = countFactor(b, 3);
 
    int a5 = countFactor(a, 5);
    int b5 = countFactor(b, 5);
 
    if (a != b) {
        cout << -1 << endl;
        return 0;
    }
 
    ans += abs(a2 - b2);
    ans += abs(a3 - b3);
    ans += abs(a5 - b5);
 
    cout << ans << endl;
 
    return 0;
}
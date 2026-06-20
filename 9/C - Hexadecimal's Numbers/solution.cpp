#include <bits/stdc++.h>
using namespace std;
 
int n;
int ans = 0;
 
void makeNumber(long long x) {
    if (x > n) return;
 
    if (x > 0) {
        ans++;
    }
 
    makeNumber(x * 10);
    makeNumber(x * 10 + 1);
}
 
int main() {
    cin >> n;
 
    makeNumber(1);
 
    cout << ans << endl;
 
    return 0;
}
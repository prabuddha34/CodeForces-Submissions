#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long prev = 0;
    long long ans = 0;
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        ans+=abs(x-prev);
        prev = x;
    }
    cout << ans << endl;
 
    return 0;
}
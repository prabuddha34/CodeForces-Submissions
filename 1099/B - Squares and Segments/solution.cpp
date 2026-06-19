#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    long long ans = LLONG_MAX;
 
    for (long long rows = 1; rows * rows <= n; rows++) {
        long long columns = (n + rows - 1) / rows; // ceil(n / rows)
 
        ans = min(ans, rows + columns);
    }
 
    cout << ans << endl;
 
    return 0;
}
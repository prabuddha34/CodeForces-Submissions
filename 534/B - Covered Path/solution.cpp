#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int v1, v2;
    cin >> v1 >> v2;
 
    int t, d;
    cin >> t >> d;
 
    int ans = 0;
 
    for (int i = 1; i <= t; i++) {
        int start = v1 + (i - 1) * d;
        int end = v2 + (t - i) * d;
 
        ans += min(start, end);
    }
 
    cout << ans << endl;
 
    return 0;
}
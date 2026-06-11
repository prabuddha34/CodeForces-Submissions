#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, c;
    cin >> n >> c;
 
    int a[105];
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int ans = 0;
 
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, a[i] - a[i + 1] - c);
    }
 
    cout << ans;
 
    return 0;
}
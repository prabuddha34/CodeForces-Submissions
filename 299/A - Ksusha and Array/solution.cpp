#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long a[100005];
    long long mn = 1e18;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
 
    for (int i = 0; i < n; i++) {
        if (a[i] % mn != 0) {
            cout << -1 << '
';
            return 0;
        }
    }
 
    cout << mn << '
';
    return 0;
}
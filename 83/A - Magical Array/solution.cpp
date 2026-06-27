#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    long long ans = 0;
    long long len = 1;
 
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            len++;
        } else {
            ans += len * (len + 1) / 2;
            len = 1;
        }
    }
 
    ans += len * (len + 1) / 2;
 
    cout << ans << endl;
 
    return 0;
}
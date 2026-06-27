#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> t(n);
 
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
 
    sort(t.begin(), t.end());
 
    long long sum = 0;
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        if (sum <= t[i]) {
            ans++;
            sum += t[i];
        }
    }
 
    cout << ans << '
';
 
    return 0;
}
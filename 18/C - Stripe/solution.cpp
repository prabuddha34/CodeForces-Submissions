#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    long long total = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
 
    if (total % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }
 
    long long need = total / 2;
    long long sum = 0;
    int ans = 0;
 
    for (int i = 0; i < n - 1; i++) {
        sum += a[i];
 
        if (sum == need) {
            ans++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
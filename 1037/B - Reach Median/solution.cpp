#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    long long s;
    cin >> n >> s;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
 
    int mid = n / 2;
    long long ans = 0;
 
    for (int i = mid; i < n; i++) {
        if (a[i] < s) {
            ans += s - a[i];
        }
    }
 
    for (int i = 0; i <= mid; i++) {
        if (a[i] > s) {
            ans += a[i] - s;
        }
    }
 
    cout << ans << '
';
 
    return 0;
}
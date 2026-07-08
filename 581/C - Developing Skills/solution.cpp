#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
 
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i] / 10;
    }
 
    vector<int> need;
 
    for (int i = 0; i < n; i++) {
        if (a[i] == 100) continue;
 
        int rem = a[i] % 10;
 
        if (rem != 0) {
            need.push_back(10 - rem);
        }
    }
 
    sort(need.begin(), need.end());
 
    for (int i = 0; i < need.size(); i++) {
        if (k >= need[i]) {
            k -= need[i];
            ans++;
        } else {
            break;
        }
    }
 
    ans += k / 10;
 
    if (ans > n * 10) {
        ans = n * 10;
    }
 
    cout << ans << endl;
 
    return 0;
}
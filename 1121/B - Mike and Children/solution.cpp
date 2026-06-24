#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
 
    int ans = 0;
 
    for (int sum = 2; sum <= 200000; sum++) {
        int l = 0, r = n - 1;
        int cnt = 0;
 
        while (l < r) {
            int cur = a[l] + a[r];
 
            if (cur == sum) {
                cnt++;
                l++;
                r--;
            } 
            else if (cur < sum) {
                l++;
            } 
            else {
                r--;
            }
        }
 
        ans = max(ans, cnt);
    }
 
    cout << ans << endl;
 
    return 0;
}
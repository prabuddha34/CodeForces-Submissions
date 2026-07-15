#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    vector<int> cnt(100002, 0);
 
    int mx = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        mx = max(mx, a[i]);   // maximum value
    }
 
    for (int x = 2; x <= mx; x++) {
        if (cnt[x] > cnt[x - 1]) {
            cout << -1;
            return 0;
        }
    }
 
    vector<int> used(100002, 0);
    vector<int> ans(n);
 
    for (int i = 0; i < n; i++) {
        int val = a[i];
        used[val]++;
        ans[i] = used[val];
    }
 
    cout << cnt[1] << "
";
 
    for (int x : ans)
        cout << x << " ";
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
 
int t;
cin >> t;
 
while (t--) {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int m = n - 4;
    vector<int> v(m);
 
    for (int i = 0; i < m; i++) {
        v[i] = a[i] + a[i + 2] - a[i + 4];
    }
 
    unordered_map<int, long long> freq;
    long long ans = 0;
 
    for (int i = 0; i < m; i++) {
        ans += freq[v[i]];
 
        if (i >= 2 && v[i - 2] == v[i]) {
            ans--;
        }
 
        if (i >= 4 && v[i - 4] == v[i]) {
            ans--;
        }
 
        freq[v[i]]++;
    }
 
    cout << ans << '
';
}
 
return 0;
 
}
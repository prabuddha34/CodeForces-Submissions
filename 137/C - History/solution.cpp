#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<int, int>> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
 
    sort(a.begin(), a.end());
 
    int mx = a[0].second;
    int ans = 0;
 
    for (int i = 1; i < n; i++) {
        if (a[i].second < mx)
            ans++;
        else
            mx = a[i].second;
    }
 
    cout << ans;
}
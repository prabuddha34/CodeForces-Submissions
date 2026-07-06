#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int total;
    cin >> total;
 
    vector<long long> a(total);
 
    for (int i = 0; i < total; i++)
        cin >> a[i];
 
    sort(a.rbegin(), a.rend());
 
    long long ans = 0;
    int take = 1;
 
    while (take <= total) {
        for (int i = 0; i < take; i++)
            ans += a[i];
        take *= 4;
    }
 
    cout << ans << '
';
}
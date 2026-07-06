#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m;
    cin >> m;
 
    int q = INT_MAX;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q = min(q, x);
    }
 
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    sort(a.rbegin(), a.rend()); // expensive to cheap
 
    long long ans = 0;
    int cycle = q + 2;
 
    for (int i = 0; i < n; i++) {
        int pos = i % cycle;
 
        if (pos < q) {
            ans += a[i]; // pay for this item
        }
        // else free item
    }
 
    cout << ans << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n), f(100001);
    for (int &x : a) cin >> x;
 
    int d = 0, r = -1;
 
    for (int i = 0; i < n; i++) {
        if (f[a[i]]++ == 0)
            d++;
 
        if (d == k) {
            r = i;
            break;
        }
    }
 
    if (r == -1) {
        cout << "-1 -1";
        return 0;
    }
 
    int l = 0;
 
    while (f[a[l]] > 1) {
        f[a[l]]--;
        l++;
    }
 
    cout << l + 1 << " " << r + 1;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n), b(n);
 
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
 
    long long top = 0, bottom = 0;
 
    for (int i = 0; i < n; i++) {
        long long newTop = max(top, bottom + a[i]);
        long long newBottom = max(bottom, top + b[i]);
 
        top = newTop;
        bottom = newBottom;
    }
 
    cout << max(top, bottom);
}
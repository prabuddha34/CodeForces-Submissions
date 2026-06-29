#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    long long mx = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
 
    long long z = 0;
 
    for (int i = 0; i < n; i++) {
        long long diff = mx - a[i];
        if (diff > 0) {
            z = gcd(z, diff);
        }
    }
 
    long long y = 0;
 
    for (int i = 0; i < n; i++) {
        y += (mx - a[i]) / z;
    }
 
    cout << y << " " << z << endl;
 
    return 0;
}
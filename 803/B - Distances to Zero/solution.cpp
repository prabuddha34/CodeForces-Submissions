#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    vector<int> d(n, 1e9);
 
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int lastZero = -1e9;
 
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) lastZero = i;
        d[i] = min(d[i], i - lastZero);
    }
 
    lastZero = 1e9;
 
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 0) lastZero = i;
        d[i] = min(d[i], lastZero - i);
    }
 
    for (int x : d) cout << x << " ";
 
    return 0;
}
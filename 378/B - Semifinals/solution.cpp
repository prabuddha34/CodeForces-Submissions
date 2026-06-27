#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n), b(n);
 
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
 
    string ansA(n, '0'), ansB(n, '0');
 
    int half = n / 2;
 
    for (int i = 0; i < n; i++) {
        int pos = i + 1;
 
        int p = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
 
        if (pos <= half || p <= n - pos) {
            ansA[i] = '1';
        }
    }
 
    for (int i = 0; i < n; i++) {
        int pos = i + 1;
 
        int p = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
 
        if (pos <= half || p <= n - pos) {
            ansB[i] = '1';
        }
    }
 
    cout << ansA << '
';
    cout << ansB << '
';
 
    return 0;
}
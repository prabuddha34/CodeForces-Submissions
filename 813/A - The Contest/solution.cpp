#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long sum = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
 
    int m;
    cin >> m;
 
    for (int i = 0; i < m; i++) {
        long long l, r;
        cin >> l >> r;
 
        if (sum <= r) {
            cout << max(sum, l) << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        set<long long> s;
        long long mx = 0;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
            mx = max(mx, x);
        }
 
        if (k == 0) {
            cout << n << endl;
            continue;
        }
 
        long long mex = 0;
        while (s.count(mex)) {
            mex++;
        }
 
        if (mex > mx) {
            cout << n + k << endl;
        } else {
            long long val = (mex + mx + 1) / 2;
 
            if (s.count(val)) {
                cout << n << endl;
            } else {
                cout << n + 1 << endl;
            }
        }
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x;
    cin >> n >> x;
 
    vector<int> a(n);
    map<int, int> cnt;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
 
    // 0 operations
    for (auto p : cnt) {
        if (p.second >= 2) {
            cout << 0 << endl;
            return 0;
        }
    }
 
    // 1 operation
    for (int i = 0; i < n; i++) {
        int y = a[i] & x;
 
        if (y != a[i] && cnt[y] > 0) {
            cout << 1 << endl;
            return 0;
        }
    }
 
    // 2 operations
    map<int, int> after;
 
    for (int i = 0; i < n; i++) {
        int y = a[i] & x;
        after[y]++;
 
        if (after[y] >= 2) {
            cout << 2 << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
    return 0;
}
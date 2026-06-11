#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a[1005];
 
    map<int, int> total;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total[a[i]]++;
    }
 
    int mx = 0;
    for (auto p : total) {
        mx = max(mx, p.second);
    }
 
    map<int, int> cur;
 
    for (int i = 0; i < n; i++) {
        cur[a[i]]++;
 
        if (total[a[i]] == mx && cur[a[i]] == mx) {
            cout << a[i] << '
';
            return 0;
        }
    }
 
    return 0;
}
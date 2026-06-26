#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    int l = -1, r = -1;
 
    for (int i = 1; i <= n; i++) {
        if (a[i] != i) {
            if (l == -1) l = i;
            r = i;
        }
    }
 
    if (l == -1) {
        cout << "0 0";
        return 0;
    }
 
    reverse(a.begin() + l, a.begin() + r + 1);
 
    for (int i = 1; i <= n; i++) {
        if (a[i] != i) {
            cout << "0 0";
            return 0;
        }
    }
 
    cout << l << " " << r;
 
    return 0;
}
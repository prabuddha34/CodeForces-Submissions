#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n), mn(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    mn[n - 1] = a[n - 1];
 
    for (int i = n - 2; i >= 0; i--) {
        mn[i] = min(a[i], mn[i + 1]);
    }
 
    for (int i = 0; i < n; i++) {
        int l = i + 1;
        int r = n - 1;
        int pos = -1;
 
        while (l <= r) {
            int mid = (l + r) / 2;
 
            if (mn[mid] < a[i]) {
                pos = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
 
        if (pos == -1) {
            cout << -1 << " ";
        } else {
            cout << pos - i - 1 << " ";
        }
    }
 
    return 0;
}
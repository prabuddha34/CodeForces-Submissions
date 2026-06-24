#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<int> e(n);
        for (int i = 0; i < n; i++) cin >> e[i];
 
        sort(e.begin(), e.end());
 
        int groups = 0;
        int currentSize = 0;
 
        for (int i = 0; i < n; i++) {
            currentSize++;
 
            if (currentSize >= e[i]) {
                groups++;
                currentSize = 0;
            }
        }
 
        cout << groups << '
';
    }
 
    return 0;
}
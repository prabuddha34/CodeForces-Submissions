#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n), l(n);
 
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> l[i];
 
        vector<int> unlocked;
 
        for (int i = 0; i < n; i++) {
            if (l[i] == 0) {
                unlocked.push_back(a[i]);
            }
        }
 
        sort(unlocked.rbegin(), unlocked.rend());
 
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (l[i] == 0) {
                a[i] = unlocked[idx++];
            }
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "
";
    }
 
    return 0;
}
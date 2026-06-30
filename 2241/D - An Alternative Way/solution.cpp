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
 
        vector<long long> a(n), b(n);
 
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        long long pref = 0;
        bool is = true;
 
        for (int i = 0; i < n; i++) {
            pref += b[i] - a[i];
 
            if (pref < 0) {
                is = false;
            }
        }
 
        cout << (is ? "YES
" : "NO
");
    }
 
    return 0;
}
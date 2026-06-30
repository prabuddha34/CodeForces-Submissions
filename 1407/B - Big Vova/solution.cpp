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
 
        vector<int> a(n);
        vector<int> used(n, 0);
 
        for (int i = 0; i < n; i++) cin >> a[i];
 
        vector<int> ans;
        int cur_gcd = 0;
 
        for (int step = 0; step < n; step++) {
            int best_idx = -1;
            int best_gcd = -1;
 
            for (int i = 0; i < n; i++) {
                if (used[i]) continue;
 
                int new_gcd = gcd(cur_gcd, a[i]);
 
                if (new_gcd > best_gcd) {
                    best_gcd = new_gcd;
                    best_idx = i;
                }
            }
 
            used[best_idx] = 1;
            ans.push_back(a[best_idx]);
            cur_gcd = best_gcd;
        }
 
        for (int x : ans) cout << x << " ";
        cout << "
";
    }
 
    return 0;
}
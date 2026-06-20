#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
 
        vector<int> a(n), b(m);
 
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
 
        vector<int> ans;
 
        int i = 0, j = 0;
 
        while (i < n || j < m) {
            bool done = false;
 
            if (i < n && a[i] == 0) {
                ans.push_back(a[i]);
                k++;
                i++;
                done = true;
            }
            else if (j < m && b[j] == 0) {
                ans.push_back(b[j]);
                k++;
                j++;
                done = true;
            }
            else if (i < n && a[i] <= k) {
                ans.push_back(a[i]);
                i++;
                done = true;
            }
            else if (j < m && b[j] <= k) {
                ans.push_back(b[j]);
                j++;
                done = true;
            }
 
            if (!done) {
                break;
            }
        }
 
        if (ans.size() != n + m) {
            cout << -1 << endl;
        } else {
            for (int x : ans) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
 
    return 0;
}
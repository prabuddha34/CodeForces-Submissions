#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> ans(n);
        int time = 0;
 
        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
 
            time = max(time, l);
 
            if (time <= r) {
                ans[i] = time;
                time++;
            } else {
                ans[i] = 0;
            }
        }
 
        for (int x : ans) {
            cout << x << " ";
        }
        cout << "
";
    }
 
    return 0;
}
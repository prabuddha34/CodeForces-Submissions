#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n + 1);
    a[0] = 0;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    vector<int> diff(n + 1);
 
    for (int i = 1; i <= n; i++) {
        diff[i] = a[i] - a[i - 1];
    }
 
    vector<int> ans;
 
    for (int k = 1; k <= n; k++) {
        bool ok = true;
 
        for (int i = k + 1; i <= n; i++) {
            if (diff[i] != diff[i - k]) {
                ok = false;
                break;
            }
        }
 
        if (ok) {
            ans.push_back(k);
        }
    }
 
    cout << ans.size() << endl;
 
    for (int x : ans) {
        cout << x << " ";
    }
 
    return 0;
}
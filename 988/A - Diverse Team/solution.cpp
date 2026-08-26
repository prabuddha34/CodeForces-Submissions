#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
    vector<int> ans;
 
    set<int> used;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
 
        if (used.find(a[i]) == used.end() && ans.size() < k) {
            used.insert(a[i]);
            ans.push_back(i + 1);
        }
    }
 
    if (ans.size() < k) {
        cout << "NO
";
    } else {
        cout << "YES
";
 
        for (int i = 0; i < k; i++) {
            cout << ans[i] << " ";
        }
 
        cout << "
";
    }
 
    return 0;
}
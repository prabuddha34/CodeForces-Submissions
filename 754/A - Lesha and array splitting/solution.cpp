#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n + 1);
    bool hasNonZero = false;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] != 0) hasNonZero = true;
    }
 
    if (!hasNonZero) {
        cout << "NO
";
        return 0;
    }
 
    vector<pair<int, int>> ans;
 
    int l = 1;
    int sum = 0;
 
    for (int i = 1; i <= n; i++) {
        sum += a[i];
 
        if (sum != 0) {
            ans.push_back({l, i});
            l = i + 1;
            sum = 0;
        }
    }
 
    if (l <= n) {
        ans.back().second = n;
    }
 
    cout << "YES
";
    cout << ans.size() << "
";
 
    for (auto p : ans) {
        cout << p.first << " " << p.second << "
";
    }
 
    return 0;
}
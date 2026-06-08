#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<int> ans;
    int len = 0, neg = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] < 0 && neg == 2) {
            ans.push_back(len);
            len = 0;
            neg = 0;
        }
 
        len++;
        if (a[i] < 0) neg++;
    }
 
    if (len > 0) ans.push_back(len);
 
    cout << ans.size() << "
";
    for (int x : ans) cout << x << " ";
    cout << "
";
 
    return 0;
}
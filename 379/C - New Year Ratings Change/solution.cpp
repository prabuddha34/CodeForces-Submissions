#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<int, int>> a;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back({x, i});
    }
 
    sort(a.begin(), a.end());
 
    vector<int> ans(n);
 
    int last = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i].first > last) {
            ans[a[i].second] = a[i].first;
        } else {
            ans[a[i].second] = last + 1;
        }
 
        last = ans[a[i].second];
    }
 
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
 
    return 0;
}
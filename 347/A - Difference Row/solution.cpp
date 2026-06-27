#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
 
    int mn = a[0];
    int mx = a[n - 1];
 
    vector<int> ans;
    ans.push_back(mx);
 
    for (int i = 1; i < n - 1; i++) {
        ans.push_back(a[i]);
    }
 
    ans.push_back(mn);
 
    for (int x : ans) cout << x << " ";
    cout << endl;
 
    return 0;
}
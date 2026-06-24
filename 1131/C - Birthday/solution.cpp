#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
 
    vector<long long> ans;
 
    for (int i = 0; i < n; i += 2) {
        ans.push_back(a[i]);
    }
 
    int start;
    if (n % 2 == 0) start = n - 1;
    else start = n - 2;
 
    for (int i = start; i >= 1; i -= 2) {
        ans.push_back(a[i]);
    }
 
    for (long long x : ans) {
        cout << x << " ";
    }
 
    return 0;
}
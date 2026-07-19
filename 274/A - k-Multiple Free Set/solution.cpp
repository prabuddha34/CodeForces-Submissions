#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    long long k;
    cin >> n >> k;
 
    vector<long long> a(n);
 
    for (auto &x : a)
        cin >> x;
 
    if (k == 1) {
        cout << n;
        return 0;
    }
 
    sort(a.begin(), a.end());
 
    unordered_set<long long> blocked;
    int ans = 0;
 
    for (long long x : a) {
        if (blocked.count(x))
            continue;
 
        ans++;
        blocked.insert(x * k);
    }
 
    cout << ans;
    return 0;
}